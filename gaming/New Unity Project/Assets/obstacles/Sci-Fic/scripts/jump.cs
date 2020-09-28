using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class jump : MonoBehaviour
{
    private PlayerStatus player;
    public new Animation animation;

    public float jumpForce;
    public float gravity;

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

            

            if (player.controller.isGrounded)
            {
                animation.Play("idle");
            }
            else 
            {
                animation.Play("jumpAttack");

                if (transform.position.y < 1)
                {
                    gameObject.GetComponent<Rigidbody>().AddForce(new Vector3(0, 1, 0) * Time.deltaTime * jumpForce);
                }


            }

           

                if (transform.position.y >2f)
            {
                gameObject.GetComponent<Rigidbody>().AddForce(new Vector3(0, -1, 0) * Time.deltaTime * gravity);
            }
           



        }
        catch
        {

        }
    }

   
}
