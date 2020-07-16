using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootMotion.Dynamics;
public class CharacterControl : MonoBehaviour
{
    
    public Animator animator;
    public PuppetMaster pm;
    public BehaviourPuppet BP;
    private int right, left;

    public int type = 2;
    public int turnAngle =0 ;
    public float turnTime = 10;
    public Transform player;
    public CharacterController controller;
    public float speed = 6.0F;
    public float jumpSpeed = 8.0F;
    public float gravity = 20.0F;
    public float SlideDelayTime = 2;
    private Vector3 moveDirection = Vector3.zero;

    private bool sliding = false;

    // Start is called before the first frame update
    void Start()
    {
        
        
    }

    public void ExplodeJump(float force)
    {

        
        moveDirection.y = jumpSpeed * force;
        moveDirection.y -= gravity * Time.deltaTime;
        controller.Move(moveDirection * Time.deltaTime);
    }

    IEnumerator SlideEnd()
    {
        yield return new WaitForSeconds(SlideDelayTime);

        sliding = false;
        animator.SetBool("Slide", false);

    }


    // Update is called once per frame
    void FixedUpdate()
    {
        left = 0;
        right = 0;

        if(Input.GetKey(KeyCode.A))
        {
            left = -turnAngle;
        }

        if (Input.GetKey(KeyCode.D))
        {
            right = turnAngle;
        }

       


        animator.SetInteger("turn",right+left);
        if (pm.state != PuppetMaster.State.Alive)
        {
           moveDirection = Vector3.zero;
        }

        if (controller.isGrounded && pm.state == PuppetMaster.State.Alive && !sliding)
        {
            animator.SetBool("jump", false);
            moveDirection = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
            moveDirection = transform.TransformDirection(moveDirection);
            moveDirection *= speed;
            if (Input.GetButton("Jump"))
            {
                moveDirection.y = jumpSpeed;
                animator.SetBool("jump", true);
            }

            if(Input.GetKey(KeyCode.S) )
            {
                sliding = true;
                animator.SetBool("Slide",true);
                StartCoroutine(SlideEnd());
            }
        }
        moveDirection.y -= gravity * Time.deltaTime;
        controller.Move(moveDirection * Time.deltaTime);

        

        if(controller.velocity.z == 0)
        {
            animator.SetInteger("speed", 0);
        }
        else
        {
            animator.SetInteger("speed", type);
        }
    }
}

