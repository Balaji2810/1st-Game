using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootMotion.Dynamics;
public class CharacterControl : MonoBehaviour
{
    
    public Animator animator;
    public PuppetMaster pm;
    public BehaviourPuppet BP;
    public PlayerStatus status;
    private int right, left;

    
    public float LeftRightSpeed;
    public int type = 2;
    public int turnAngle =0 ;
    public float turnTime = 10;
    public Transform playerRoot;
    public CharacterController controller;
    public float speed = 6.0F;
    public float maxspeed;
    public float inverseAxcel = 10f;
    public float jumpSpeed = 8.0F;
    public float gravity = 20.0F;
    public float SlideDelayTime = 2;
    private Vector3 moveDirection = Vector3.zero;

    private bool sliding = false;

    public float FallDeathTime = 1;
    float FallTime = 0;

    public TimeManager timeManager;

    bool slowmotion = true;

    public void DeadRagdoll()
    {
       
        pm.state = PuppetMaster.State.Dead;
        if(slowmotion)
        {
            slowmotion = false;
            timeManager.DoSlowMotion();
        }
        
    }

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

        if (speed > 30)
        {
            speed += Time.deltaTime / (inverseAxcel*50);
        }
        else if (speed > 25)
        {
            speed += Time.deltaTime / (inverseAxcel*30);
        }
        else if (speed > 20)
        {
            speed += Time.deltaTime / (inverseAxcel*20f);
        }
        else if (speed > 17)
        {
            speed += Time.deltaTime / (inverseAxcel*15f);
        }
        else if (speed > 10)
        {
            speed += Time.deltaTime / (inverseAxcel * 8f);
        }
        else if (speed > 5)
        {
            speed += Time.deltaTime / (inverseAxcel*1.5f);
        }
        else 
        {
            speed += Time.deltaTime / (inverseAxcel*1f);
        }
        

        //Speed Accelarator
        if (speed > maxspeed)
            speed = maxspeed;

        print(speed);


        //animator.SetInteger("turn",right+left);
        if (pm.state != PuppetMaster.State.Alive)
        {
            moveDirection = Vector3.zero;
           //moveDirection = Vector3.Lerp(moveDirection, Vector3.zero,2*Time.deltaTime);
           
        }
        else
        {
            moveDirection.y -= gravity * Time.deltaTime;
            controller.Move(moveDirection * Time.deltaTime);
        }

        if (pm.state == PuppetMaster.State.Alive && !sliding  &&!status.AnimationDeath)
        {
            if(controller.isGrounded)
            {
                animator.SetBool("jump", false);
                moveDirection = new Vector3(0, 0, 1);
                moveDirection = transform.TransformDirection(moveDirection);
                moveDirection *= speed;
                if (Input.GetButton("Jump"))
                {
                    moveDirection.y = jumpSpeed;
                    animator.SetBool("jump", true);
                }

                if (Input.GetKey(KeyCode.S))
                {
                    sliding = true;
                    animator.SetBool("Slide", true);
                    StartCoroutine(SlideEnd());
                }
                FallTime = 0;

                //left right
                playerRoot.position = new Vector3(playerRoot.position.x + (Input.GetAxis("Horizontal") * LeftRightSpeed * Time.deltaTime), playerRoot.position.y, playerRoot.position.z );

            }
            else
            {
                //animator.SetBool("jump", true);
                FallTime += Time.deltaTime;
            }

           

        }
        else
        {
            animator.SetBool("jump", false);
        }

        if(FallTime>FallDeathTime)
        {
            pm.state = PuppetMaster.State.Dead;
        }

        if(status.AnimationDeath)
        {
            moveDirection = Vector3.Lerp(moveDirection,Vector3.zero,Time.deltaTime);
            Quaternion target;
            if (Random.Range(1,3)==1)
            {
                target = Quaternion.Euler(0, -175, 0);
            }
            else
            {
                target = Quaternion.Euler(0, -181, 0);
            }
             
            controller.gameObject.transform.rotation = Quaternion.Slerp(transform.rotation, target, Time.deltaTime);
        }

       

        

       
    }
}

