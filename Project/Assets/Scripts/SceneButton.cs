using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneButton : MonoBehaviour {
	public GameObject panel;
	public string scene_name;
	public UnityEngine.Audio.AudioMixer mixer;
	private AudioSource clickSound;

	// Use this for initialization
	void Start () {
		panel.SetActive (false);
		clickSound = this.gameObject.GetComponent<AudioSource> ();
		mixer.SetFloat ("BGMVolume", 0);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnClick(){
		StartCoroutine (LoadScene ());
		if (clickSound != null) {
			clickSound.Play ();
		}
	}

	IEnumerator LoadScene(){
		StartCoroutine (Dim ());
		yield return new WaitForSeconds (2.0f);

		AsyncOperation async = SceneManager.LoadSceneAsync (scene_name);
		async.allowSceneActivation = false;

		while (async.progress < 0.9f) {
			yield return new WaitForEndOfFrame ();
		}

		async.allowSceneActivation = true;
	}

	IEnumerator Dim(){
		panel.SetActive (true);
		float alpha = 0;
		float sound = 0;
		while (alpha <= 1) {
			alpha += 0.02f;
			sound -= 0.5f;
			panel.GetComponent<Image> ().color = new Color (0.2f, 0.2f, 0.2f, alpha);
			mixer.SetFloat ("BGMVolume", sound);
			yield return new WaitForSeconds (0.03f);
		}
	}
}
