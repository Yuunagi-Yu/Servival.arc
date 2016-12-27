using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Central;

public interface EnemyDamage : IEventSystemHandler {
	void OnDamage(int damage);
}

public class Enemy : MonoBehaviour, EnemyDamage {
	private GameObject destroy, GM, player;
	private TextMesh enemyLevel;
	private int HP = 0, speed = 5;
	private bool isChase = false;
	private Vector3 direction = Vector3.zero;

	// Use this for initialization
	void Start () {
		GM = GameObject.FindWithTag ("GameController").gameObject;
		player = GameObject.FindWithTag ("Player").gameObject;
		destroy = gameObject.transform.FindChild ("DestroyEnemy").gameObject;
		destroy.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
		if (player != null) {
			if (isChase) {
				direction = (player.transform.position - transform.position).normalized;
				transform.position += direction * speed * Time.deltaTime;
			}
		}
	}

	void OnEnable(){
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

	public void OnDamage(int damage){
		HP -= damage;
		enemyLevel.text = HP + "";
		if (HP <= 0) {
			destroy.SetActive (true);
			destroy.transform.parent = GM.transform;
			transform.parent = destroy.transform;
			this.gameObject.SetActive (false);
		}
	}

	void OnTriggerEnter(Collider col){
		if (col.tag == "Player") {
			ExecuteEvents.Execute<PlayerDamage> (
				target: col.gameObject,
				eventData: null,
				functor: (target, y) => target.OnDamage (HP)
			);
			destroy.SetActive (true);
			destroy.transform.parent = GM.transform;
			transform.parent = destroy.transform;
			this.gameObject.SetActive (false);
		}
	}

	IEnumerator waitTime(){
		yield return new WaitForSeconds (0.9f);
		isChase = true;
	}
}
