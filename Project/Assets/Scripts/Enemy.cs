using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Central;

public interface EnemyInterface : IEventSystemHandler {
	void OnDamage(int damage);
}

public class Enemy : MonoBehaviour, EnemyInterface {
	private GameObject destroy, GM, player;
	private Collider col;
	private TextMesh enemyLevel;
	private int HP = 0, isStraihgt = 0;
	private float speed = 5;
	private bool isChase = false;
	private Vector3 direction = Vector3.zero;

	// Use this for initialization
	void Start () {
		GM = GameObject.FindWithTag ("GameController").gameObject;
		player = GameObject.FindWithTag ("Player").gameObject;
		col = gameObject.GetComponent<BoxCollider> ();
		col.enabled= false;
		destroy = gameObject.transform.FindChild ("DestroyEnemy").gameObject;
		destroy.SetActive (false);
	}

	void OnEnable(){

		//Activeになった時にエフェクトを自分の子供に
		if (transform.parent.name == "DestroyEnemy") {
			transform.parent = GM.transform;
			destroy.transform.parent = transform;
			destroy.SetActive (false);
		}

		//3DTextのTextを初期化
		enemyLevel = transform.FindChild ("EnemyLevel").GetComponent<TextMesh> ();
		HP = Enums.Level;
		enemyLevel.text = HP + "";
		StartCoroutine (waitTime ());
	}

	void OnDisable(){
		isChase = false;
		col.enabled = false;
	}
	
	// Update is called once per frame
	void Update () {
		if (player != null) {
			if (isChase) {
				if (isStraihgt % 3 == 0) {

					//愚直にPlayerを追いかける
					direction = (player.transform.position - transform.position).normalized;
					transform.position += direction * speed * Time.deltaTime;

				} else if (isStraihgt % 3 == 1) {

					//Playerの移動方向を先読みして移動
					Vector3 target = new Vector3 (Input.GetAxis ("Horizontal"), 0, Input.GetAxis ("Vertical")).normalized;
					if (isStraihgt / 3 % 2 == 0) {
						target = target * Time.deltaTime * 300 + player.transform.position;
					} else {
						target = target * Time.deltaTime * -300 + player.transform.position;
					}
					direction = (target - transform.position).normalized;
					transform.position += direction * speed * Time.deltaTime;

				} else if (isStraihgt % 3 == 2) {
					
					//Playerの周りをぐるぐる回りながら接近する
					if (isStraihgt / 3 % 2 == 0) {
						transform.RotateAround (player.transform.position, Vector3.up, 30 * Random.Range(0.8f, 1.2f) * Time.deltaTime);
					} else {
						transform.RotateAround (player.transform.position, Vector3.up, -30 * Random.Range(0.8f, 1.2f) * Time.deltaTime);
					}
					direction = (player.transform.position - transform.position).normalized;
					transform.position += direction * speed * Time.deltaTime / 1.5f;

				}
				//角度の固定と座標制限
				transform.rotation = Quaternion.Euler (0, 0, 0);
				transform.position = new Vector3 (Mathf.Clamp (transform.position.x, -21.89f, 21.89f)
					, 0, Mathf.Clamp (transform.position.z, -21.89f, 21.89f));
			}
		}
	}

	//ダメージを受ける
	public void OnDamage(int damage){
		HP -= damage;
		enemyLevel.text = HP + "";
		if (HP <= 0) {

			//自らを非アクティブにし、エフェクトを自分の親にする
			destroy.SetActive (true);
			destroy.transform.parent = GM.transform;
			transform.parent = destroy.transform;
			this.gameObject.SetActive (false);
		}
	}

	void OnTriggerEnter(Collider col){
		if (col.tag == "Player") {

			//Playerにダメージを与える
			ExecuteEvents.Execute<PlayerDamage> (
				target: col.gameObject,
				eventData: null,
				functor: (target, y) => target.OnDamage (HP)
			);

			//自らを非アクティブにし、エフェクトを自分の親にする
			destroy.SetActive (true);
			destroy.transform.parent = GM.transform;
			transform.parent = destroy.transform;
			this.gameObject.SetActive (false);
		}
	}

	//スピードに差をつける、乱数生成、コライダーオン
	IEnumerator waitTime(){
		yield return new WaitForSeconds (0.9f);
		isChase = true;
		col.enabled = true;
		speed += Random.Range (0.0f, 1.0f);
		isStraihgt = Random.Range (0, 241);
	}
}
