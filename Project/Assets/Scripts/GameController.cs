using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Central;

public class GameController : MonoBehaviour {
	public GameObject enemy, healHP;
	private GameObject player, HPBall;
	private GameObject[] enemys = new GameObject[15];
	private List<int> enemyList = new List<int> ();
	private int levelBase = 0, enemyCount = 0;
	public int phase;

	// Use this for initialization
	void Start () {
		player = GameObject.FindWithTag ("Player").gameObject;
		Enums.Level = 0;
		for (int i = 0; i < enemys.Length; i++) {
			enemys [i] = Instantiate (enemy) as GameObject;
			enemys [i].transform.parent = transform;
			enemys [i].SetActive (false);
		}
		HPBall = Instantiate (healHP) as GameObject;
		HPBall.transform.parent = transform;
		HPBall.SetActive (false);
		StartCoroutine (isEnemy ());
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void Spawn(){
		enemyList.Clear();
		levelBase = Enums.Level / phase;
		enemyCount = Random.Range (levelBase * 2 + 3, levelBase * 2 + 6);
		int t;
		for (int i = -1; i < enemyCount; i++) {
			do {
				t = Random.Range(0, 16);
			} while(enemyList.Contains(t));
			enemyList.Add (t);
			int x = (t / 4 % 2 == 0) ? Random.Range (1, 4) : Random.Range (4, 7);
			int y = (t / 8 == 0) ? Random.Range (1, 4) : Random.Range (4, 7);
			if (t % 2 == 0) {
				x *= -1;
			}
			if(t % 4 < 2){
				y *= -1;
			}
			if (i == -1) {
				if (!HPBall.activeInHierarchy) {
					HPBall.SetActive (true);
					HPBall.transform.position = new Vector3 (x * 3, 0, y * 3);
				} else {
					continue;
				}
			} else {
				enemys [i].SetActive (true);
				enemys [i].transform.position = new Vector3 (x * 3, 0, y * 3);
			}
		}
	}

	IEnumerator isEnemy(){
		while (player != null) {
			yield return new WaitForSeconds (1.5f);
			int count = 0;
			for (int i = 0; i < enemys.Length; i++) {
				if (enemys [i].activeInHierarchy) {
					continue;
				} else {
					count++;
				}
			}
			if (count == enemys.Length) {
				yield return new WaitForSeconds (1.5f);
				Enums.Level++;
				Spawn ();
			}
		}
	}
}
