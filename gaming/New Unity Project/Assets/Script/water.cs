using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class water : MonoBehaviour
{
    private PlayerStatus player;
    public float force = 10;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        try
        {
            player = GameObject.Find("player Root").GetComponentInChildren<PlayerStatus>();
            

            //move forward
            transform.position = new Vector3(transform.position.x, transform.position.y, player.BodyPart.position.z);

            
           //Left Right move
            transform.position = new Vector3(player.BodyPart.position.x, transform.position.y, transform.position.z);
            //transform.position = Vector3.Lerp(transform.position, new Vector3(player.LeftRight, transform.position.y, transform.position.z), Time.deltaTime * LeftRightSpeed);

        }
        catch
        {

        }

    }

    private void OnTriggerStay(Collider other)
    {
        if(other.gameObject.CompareTag("Untagged"))
        {
            return;
        }
        //other.gameObject.GetComponent<Rigidbody>().AddForce(Vector3.up*Time.deltaTime*force,ForceMode.Acceleration);
        if(other.gameObject.CompareTag("body"))
        {
            //other.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, Time.deltaTime * force, 0);
            other.gameObject.GetComponent<Rigidbody>().AddForce(Vector3.up * Time.deltaTime * force, ForceMode.Acceleration);
        }
        else
        {
            if (Random.Range(0, 4) == 0)
            {
                if (other.gameObject.CompareTag("LeftHand"))
                {
                    other.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, Time.deltaTime * force, Random.Range(-5, 0));
                }

                if (other.gameObject.CompareTag("RightHand"))
                {
                    other.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, Time.deltaTime * force, Random.Range(0, 5));
                }
            }
            else
            {
                other.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, Time.deltaTime * force/5, 0);
            }
        }
        
        

    }
}
