using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Central;

public interface EnemyDamage : IEventSystemHandler {
	void OnDamage(int damage);
}

public class Enemy : MonoBehaviour, EnemyDamage {
	private GameObject destroy;
	private TextMesh enemyLevel;
	private int HP = 0;

	// Use this for initialization
	void Start () {
		destroy = gameObject.transform.FindChild ("DestroyEnemy").gameObject;
		destroy.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnEnable(){
		if (transform.parent != null) {
			transform.parent = null;
			destroy.transform.parent = transform;
			destroy.SetActive (false);
		}
		//3DTextのTextを初期化
		enemyLevel = transform.FindChild ("EnemyLevel").GetComponent<TextMesh> ();
		HP = Enums.Level;
		enemyLevel.text = HP + "";
	}

	public void OnDamage(int damage){
		HP -= damage;
		enemyLevel.text = HP + "";
		if (HP <= 0) {
			destroy.SetActive (true);
			destroy.transform.parent = null;
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
			destroy.transform.parent = null;
			transform.parent = destroy.transform;
			this.gameObject.SetActive (false);
		}
	}
}
