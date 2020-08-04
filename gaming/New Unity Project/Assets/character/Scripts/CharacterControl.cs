﻿using System.Collections;
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

    public GameManager gameManager;
    public float LeftRightSpeed;
    public int type = 2;
    public int turnAngle = 0;
    public float turnTime = 10;
    public Transform playerRoot;
    public CharacterController controller;
    public float speed = 6.0F;
    public float maxspeed;
    public float inverseAxcel = 10f;
    public float jumpSpeed = 8.0F;
    public float jumpDelayTime = 0.25f;
    public float gravity = 20.0F;
    public float SlideDelayTime = 2;
    private Vector3 moveDirection = Vector3.zero;

    private float jump = 0;
    private bool sliding = false;

    public float FallDeathTime = 1;
    float FallTime = 0;

    public TimeManager timeManager;

    bool slowmotion = true;

    public void DeadRagdoll(bool activate = true)
    {
       
       
        if(slowmotion && activate &&!(status.AnimationDeath))
        {
            slowmotion = false;
            timeManager.DoSlowMotion();
        }

        pm.state = PuppetMaster.State.Dead;

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
        DeadRagdoll();
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
        if(!gameManager.Startgame)
        {
            return;
        }

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

        
        else if (speed > 20)
        {
            speed += Time.deltaTime / (inverseAxcel*60);
        }
        else if (speed > 15)
        {
            speed += Time.deltaTime / (inverseAxcel * 30f);
        }
        else if (speed > 10)
        {
            speed += Time.deltaTime / (inverseAxcel * 10f);
        }
        else if (speed > 5)
        {
            speed += Time.deltaTime / (inverseAxcel*5f);
        }
        else 
        {
            speed += Time.deltaTime / (inverseAxcel*1.5f);
        }
        

        //Speed Accelarator
        if (speed > maxspeed)
            speed = maxspeed;

        


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

        if (pm.state == PuppetMaster.State.Alive  &&!status.AnimationDeath)
        {
            //left right
            float leftright = playerRoot.position.x + (Input.GetAxis("Horizontal") * LeftRightSpeed * Time.deltaTime);
            leftright = Mathf.Clamp(leftright, -2, 2);
            playerRoot.position = new Vector3(leftright, playerRoot.position.y, playerRoot.position.z);

            if (controller.isGrounded && !sliding)
            {
                jump += Time.deltaTime;
                jump = Mathf.Clamp(jump, 0, jumpDelayTime);

                animator.SetBool("jump", false);
                moveDirection = new Vector3(0, 0, 1);
                moveDirection = transform.TransformDirection(moveDirection);
                moveDirection *= speed;
                if ((Input.GetButton("Jump") || Input.GetKey(KeyCode.W)) && jumpDelayTime==jump)
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

                

            }
            else
            {
                //animator.SetBool("jump", true);
                FallTime += Time.deltaTime;
                jump = 0;
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

