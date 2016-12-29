using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Central;

public class GameController : MonoBehaviour {
	public GameObject enemy, healHP,levelUI, scoreUI, upUI, resultUI, resultScoreUI, highScoreUI
		, upTarget1, upTarget2, upTarget3, levelTarget1, levelTarget2;
	private GameObject player, HPBall;
	private GameObject[] enemys = new GameObject[15];
	private List<int> enemyList = new List<int> ();
	private int levelBase = 0, enemyCount = 0, first_Score = 0;
	public int phase;
	private Text level, score, resultScore, highScore;
	private const string HIGH_SCORE_KEY = "HighScore";

	// Use this for initialization
	void Start () {
		player = GameObject.FindWithTag ("Player").gameObject;

		//UIたちの初期化
		level = levelUI.GetComponent<Text> ();
		score = scoreUI.GetComponent<Text> ();
		resultScore = resultScoreUI.GetComponent<Text> ();
		highScore = highScoreUI.GetComponent<Text> ();
		resultUI.SetActive (false);

		Enums.Level = 0;
		Enums.Score = 0;

		//敵を生成
		for (int i = 0; i < enemys.Length; i++) {
			enemys [i] = Instantiate (enemy) as GameObject;
			enemys [i].transform.parent = transform;
			enemys [i].SetActive (false);
		}

		//HP回復玉を生成
		HPBall = Instantiate (healHP) as GameObject;
		HPBall.transform.parent = transform;
		HPBall.SetActive (false);

		StartCoroutine (isEnemy ());
	}
	
	// Update is called once per frame
	void Update () {
		if (first_Score < Enums.Score) {
			first_Score = Enums.Score;
			score.text = "Score : " + first_Score;
		}
		if (player == null) {
			StartCoroutine (OpenResult ());
		}
	}

	//Enemyをスポーン
	void Spawn(){
		enemyList.Clear();
		levelBase = Enums.Level / phase;
		enemyCount = Random.Range (levelBase + 4, levelBase + 6);
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

	//UIのアニメーション
	void UIAnimationStart(){
		iTween.MoveTo (upUI, iTween.Hash (
			"x", upTarget1.transform.position.x
			, "time", 0.7f
			, "oncomplete", "UIAnimationEnd"
			, "oncompletetarget", this.gameObject
			, "easeType", "easeOutQuad"
		));
	}

	void UIAnimationEnd(){
		iTween.MoveTo (upUI, iTween.Hash (
			"x", upTarget2.transform.position.x
			, "time", 0.7f
			, "oncomplete", "UIAnimationStop"
			, "oncompletetarget", this.gameObject
			, "easeType", "easeInBack"
		));
		iTween.MoveTo(levelUI, iTween.Hash(
			"x", levelTarget2.transform.position.x
			, "time", 0.7f
			, "easeType", "easeInBack"
		));
	}

	void UIAnimationStop(){
		iTween.MoveTo(levelUI, iTween.Hash(
			"x", levelTarget1.transform.position.x
			, "time", 0.7f
			, "easeType", "easeOutBack"
		));
		upUI.transform.position = upTarget3.transform.position;
	}

	//Enemyが全て非Activeの時にSpawnを呼び出す
	IEnumerator isEnemy(){
		while (player != null) {
			int count = 0;
			for (int i = 0; i < enemys.Length; i++) {
				if (enemys [i].activeInHierarchy) {
					//continue;
				} else {
					count++;
				}
			}
			yield return new WaitForSeconds (0.5f);
			if (count == enemys.Length) {
				if (Enums.Level != 0) {
					iTween.Stop();
					UIAnimationStart ();
				}
				yield return new WaitForSeconds (1.5f);
				Enums.Level++;
				level.text = "Level : " + Enums.Level;
				Spawn ();
			}
		}
	}

	IEnumerator OpenResult(){
		yield return new WaitForSeconds (1.5f);

		resultScore.text = "Score : " + first_Score;
		if (PlayerPrefs.HasKey (HIGH_SCORE_KEY)) {
			int s = PlayerPrefs.GetInt (HIGH_SCORE_KEY, -1);
			if (s > first_Score) {
				highScore.text = "HighScore : " + s;
			} else {
				highScore.text = "HighScore : " + first_Score;
				PlayerPrefs.SetInt (HIGH_SCORE_KEY, first_Score);
				PlayerPrefs.Save ();
			}
		} else {
			highScore.text = "HighScore : " + first_Score;
			PlayerPrefs.SetInt (HIGH_SCORE_KEY, first_Score);
			PlayerPrefs.Save ();
		}
		resultUI.SetActive (true);
	}
}
