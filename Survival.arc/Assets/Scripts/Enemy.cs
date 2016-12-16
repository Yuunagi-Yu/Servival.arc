using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Central;

public interface OnDamage : IEventSystemHandler {
	void OnDamage(int damage);
}

public class Enemy : MonoBehaviour, OnDamage {
	private TextMesh enemyLevel;
	private int HP = 0;

	// Use this for initialization
	void Start () {
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
	}
}
