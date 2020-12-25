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

    void OnEnable()
    {
        Exploded=false;
        transform.Find("SPIDER_BOT").gameObject.SetActive(true);
        Explosion.SetActive(false);
    }

    
    IEnumerator DestroyExplosion()
    {
        yield return new WaitForSeconds(delayTime);

        Explosion.SetActive(false);
        gameObject.SetActive(false);

    }

    



    void Explode()
    {
        Collider[] colliders = Physics.OverlapSphere(transform.position, radius);
        StartCoroutine(DestroyExplosion());
        foreach (Collider obj in colliders)
        {
            Explosion.SetActive(true);
            //GameObject mesh = gameObject.
            transform.Find("SPIDER_BOT").gameObject.SetActive(false);
            GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<CharacterControl>().DeadRagdoll();
            
            if (obj.gameObject.layer==14&&obj.gameObject.GetComponent<Rigidbody>()!=null)
            {
                float Distance = Vector3.Distance(obj.gameObject.transform.position, this.transform.position);
                float TempDistance = Mathf.InverseLerp(radius*2, 0f, Distance);
                float strength = Mathf.Lerp(0f, force, TempDistance);
                Vector3 DirectionToMagnet = (this.transform.position - obj.gameObject.transform.position).normalized;
                obj.gameObject.GetComponent<Rigidbody>().AddForce(new Vector3(DirectionToMagnet.x, DirectionToMagnet.y*4, DirectionToMagnet.z) * strength, ForceMode.VelocityChange);
                
                //obj.gameObject.GetComponent<Rigidbody>().AddExplosionForce(force,transform.position,radius,500,ForceMode.VelocityChange);
                //CharacterControl control = obj.gameObject.GetComponentInChildren<CharacterControl>();
                //control.ExplodeJump(force);

            }

        }
        //GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<CharacterControl>().ExplodeJump(force);
        

        //Destroy(go);

        

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
