using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GuideButton : MonoBehaviour {
	public GameObject guide, soundBase;
	public bool on_off;
	private AudioSource clickSourd;

	// Use this for initialization
	void Start () {
		clickSourd = soundBase.GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnClick(){
		if (on_off) {
			if (clickSourd != null) {
				clickSourd.Play ();
			}
			guide.SetActive (true);
		} else {
			if (clickSourd != null) {
				clickSourd.Play ();
			}
			guide.SetActive (false);
		}
	}
}
