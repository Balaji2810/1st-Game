using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootMotion.Dynamics;

public class spider_bot : MonoBehaviour
{
    // Start is called before the first frame update
    public float radius = 3;
    public float force = 100;
    public float delayTime = 4f;
    public GameObject Explosion;
    private bool Exploded;

    void Start()
    {
        Exploded=false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator DestroyExplosion(GameObject go)
    {
        yield return new WaitForSeconds(delayTime);

        Destroy(go);
        Destroy(gameObject);

    }

    



    void Explode()
    {
        Collider[] colliders = Physics.OverlapSphere(transform.position, radius);
        
        foreach(Collider obj in colliders)
        {

            //GameObject mesh = gameObject.
            transform.Find("SPIDER_BOT").gameObject.SetActive(false);

            if (obj.gameObject.layer==15)
            {


                CharacterControl control = obj.gameObject.GetComponentInChildren<CharacterControl>();
                GameObject go = Instantiate(Explosion, transform.position, transform.rotation);
                //Destroy(go);
                
                StartCoroutine(DestroyExplosion(go));
                
                control.ExplodeJump(force);

            }
           
        }
       
    }

    void OnCollisionEnter(Collision collision)
    {
        
        if(collision.gameObject.layer==14 && !Exploded) // "Puppet" layer
        {
            Exploded = true;

            Explode();
            
        }
        
    }
}
