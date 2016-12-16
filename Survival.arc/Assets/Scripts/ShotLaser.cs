using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShotLaser : MonoBehaviour {
	private int count = 0;

	// Use this for initialization
	void Start () {
		StartCoroutine (CheckChild ());
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	IEnumerator CheckChild(){
		while (true) {
			yield return new WaitForSeconds (3.0f);
			foreach (Transform myChild in transform) {
				if (myChild.gameObject.activeInHierarchy) {
					break;
				} else {
					count++;
					continue;
				}
			}
			if (count == 3) {
				Destroy (this.gameObject);
			}
		}
	}
}
