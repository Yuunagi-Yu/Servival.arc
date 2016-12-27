using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public interface PlayerDamage : IEventSystemHandler {
	void OnDamage (int damage);
}

public class Player : MonoBehaviour, PlayerDamage {
	public float speed;
	public GameObject laser1, laser2, HealHP, destroy;
	private Vector3 moveDirection = Vector3.zero;
	private Vector3 targetPoint = Vector3.zero;
	private int HP = 1;
	private TextMesh textMesh;
	private bool shot = true;

	// Use this for initialization
	void Start () {
		HealHP.SetActive (false);

		//3DTextの初期化
		textMesh = transform.FindChild ("PlayerLevel").GetComponent<TextMesh> ();
		textMesh.text = HP + "";
	}
	
	// Update is called once per frame
	void Update () {
		//移動方向の取得
		moveDirection = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical")).normalized;

		//インターバルつきのクリック取得
		if (shot) {
			if (Input.GetMouseButtonDown (0) || Input.GetMouseButton (0)) {
				Ray mouseRay = Camera.main.ScreenPointToRay (Input.mousePosition);
				Shot (mouseRay, true);
			} else if (Input.GetMouseButtonDown (1) || Input.GetMouseButton (1)) {
				Ray mouseRay = Camera.main.ScreenPointToRay (Input.mousePosition);
				Shot (mouseRay, false);
			}
		}

		//移動
		if (moveDirection.magnitude > 0.1f) {
			transform.position += moveDirection * Time.deltaTime * speed;
		}

		//座標制限
		transform.position = new Vector3 (Mathf.Clamp (transform.position.x, -21.89f, 21.89f)
			, 0, Mathf.Clamp (transform.position.z, -21.89f, 21.89f));
	} 

	//レーザーを発射するメソッド
	void Shot(Ray ray, bool left){
		RaycastHit hit;
		if (Physics.Raycast (ray, out hit)) {
			if (hit.transform.tag == "Field") {
				targetPoint = new Vector3 (hit.point.x, transform.position.y, hit.point.z);
				Vector3 spawnPosition = transform.position + moveDirection * Time.deltaTime * speed * 4;
				if (left) {
					Instantiate (laser1, spawnPosition, Quaternion.LookRotation (targetPoint - transform.position));
				} else {
					Instantiate (laser2, spawnPosition, Quaternion.LookRotation (targetPoint - transform.position));
				}
				shot = false;
				StartCoroutine (shotWait (0.2f));
			}
		}
	}

	public void OnDamage(int damage){
		HP -= damage;
		textMesh.text = HP + "";
		if (HP <= 0) {
			Camera.main.gameObject.GetComponent<FollowCamera> ().enabled = false;
			Instantiate (destroy, transform.position, Quaternion.identity);
			Destroy (this.gameObject);
		}
	}

	void OnTriggerEnter(Collider col){
		if (col.tag == "HPBall") {
			HP += 10;
			textMesh.text = HP + "";
			HealHP.SetActive (false);
			HealHP.SetActive (true);
			col.gameObject.SetActive (false);
		}
	}

	//インターバル用のコルーチン
	IEnumerator shotWait(float waitTime){
		yield return new WaitForSeconds (waitTime);
		shot = true;
	}
}
