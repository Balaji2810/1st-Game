using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitReaction : MonoBehaviour
{
    public int BodyPartNUmber;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag == "obstacle")
        {
           
        }
        print(collision.gameObject.name);

    }

    private void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.tag == "obstacle")
        {

        }
        print(collision.gameObject.name);
    }
}
