using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Central;

public interface EnemyDamage : IEventSystemHandler {
	void OnDamage(int damage);
}

public class Enemy : MonoBehaviour, EnemyDamage {
	private TextMesh enemyLevel;
	private int HP = 0;

	// Use this for initialization
	void Start () {
		//3DTextのTextを初期化
		enemyLevel = transform.FindChild ("EnemyLevel").GetComponent<TextMesh> ();
		HP = Enums.Level;
		enemyLevel.text = HP + "";
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnDamage(int damage){
		HP -= damage;
		enemyLevel.text = HP + "";
		if (HP <= 0) {
			Destroy (this.gameObject);
		}
	}

	void OnTriggerEnter(Collider col){
		if (col.tag == "Player") {
			ExecuteEvents.Execute<PlayerDamage> (
				target: col.gameObject,
				eventData: null,
				functor: (target, y) => target.OnDamage (HP)
			);
			Destroy (this.gameObject);
		}
	}
}
