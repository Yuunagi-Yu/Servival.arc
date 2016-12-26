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

	//子要素が全てfalseだとdestroy
	IEnumerator CheckChild(){
		while (true) {
			yield return new WaitForSeconds (5.0f);
			foreach (Transform myChild in transform) {
				if (myChild.gameObject.activeInHierarchy) {
					break;
				} else {
					count++;
				}
			}
			if (count == 3) {
				Destroy (this.gameObject);
			} else {
				count = 0;
			}
		}
	}
}
