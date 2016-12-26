using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Central;

public class Laser : MonoBehaviour {
	public float speed;
	public GameObject effect;
	private int damage = 0;

	// Use this for initialization
	void Start () {
		damage = Enums.playerDamage;
	}
	
	// Update is called once per frame
	void Update () {
		transform.Translate (Vector3.forward * Time.deltaTime * speed, Space.Self);
	}

	void OnTriggerEnter(Collider col){
		if (col.tag == "Wall") {
			GameObject obj = (GameObject)Instantiate (effect, transform.position, Quaternion.identity);
			obj.transform.parent = this.transform.parent.transform;
			this.gameObject.SetActive (false);
		} else if (col.tag == "Enemy") {
			ExecuteEvents.Execute<EnemyDamage> (
				target: col.gameObject,
				eventData: null,
				functor: (target, y) => target.OnDamage (damage)
			);
			GameObject obj = (GameObject)Instantiate (effect, transform.position, Quaternion.identity);
			obj.transform.parent = this.transform.parent.transform;
			this.gameObject.SetActive (false);
		}
	}
}
