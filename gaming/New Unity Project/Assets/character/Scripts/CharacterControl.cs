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
    

    private GameManager gameManager;
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

    private TimeManager timeManager;
    public Swipe swipe;

    bool slowmotion = true;

    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        timeManager = GameObject.Find("Time Manager").GetComponent<TimeManager>();
        MoveType();
    }

    void Continue()
    {
        
        GameObject.Find("Canvas").transform.Find("continue").gameObject.SetActive(true);
    }

    [System.NonSerialized]
    public bool isWalk = true;
    //[System.NonSerialized]
    public bool CanDie = false;
    [System.NonSerialized]
    public int SpeedMod = 1;

    public GameObject swipe2move, drag2move;
    public void MoveType()
    {
        if(PlayerPrefs.GetInt("SwipeToMove",1)==1)
        {
            swipe2move.SetActive(true);
            drag2move.SetActive(false);
        }
        else
        {
            swipe2move.SetActive(false);
            drag2move.SetActive(true);
        }
    }

    public void DeadRagdoll(bool activate = true)
    {     
       isWalk = false;
       if (gameManager.Startgame && CanDie)
        {
            if (slowmotion && activate && !(status.AnimationDeath))
            {
                slowmotion = false;
                timeManager.DoSlowMotion();
            }

            //pm.state = PuppetMaster.State.Dead;
            pm.Kill(PuppetMaster.StateSettings.Default);
            GameObject.Find("Canvas").transform.Find("game").gameObject.SetActive(false);
            Invoke("Continue", 5);
        }
        
    }

 
    public void StandUpWalk()
    {
        if (!gameManager.Startgame)
        {
            isWalk = true;
        }
        
    }

    public void ExplodeJump(float force)
    {
        DeadRagdoll();
        moveDirection.y = jumpSpeed * force;
        moveDirection.y -= gravity * Time.deltaTime;
        controller.Move(moveDirection * Time.deltaTime);    
    }

    IEnumerator SlideEnd()
    {
        yield return new WaitForSeconds(SlideDelayTime);

        //sliding = false;
        animator.SetBool("Slide", false);

    }


    // Update is called once per frame
    void FixedUpdate()
    {
        
        if(!gameManager.Startgame)
        {
            //animator.SetInteger("speed", 0);
            return;
        }

       
               
        
        else if(speed>17.0f)
        {
            speed += (Time.deltaTime / 55.0f);
            animator.SetInteger("speed", 2);
        }
        else if(speed>6.0f)
        {
            speed += Time.deltaTime* SpeedMod;
            animator.SetInteger("speed", 2);
        }
        else
        {
            speed += Time.deltaTime* SpeedMod;
            animator.SetInteger("speed", 1);
        }

        

        
        
        
        

        //Speed Accelarator
        speed = Mathf.Clamp(speed, 0, maxspeed);
        


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
            

            if (controller.isGrounded && !sliding)
            {
                jump += Time.deltaTime;
                jump = Mathf.Clamp(jump, 0, jumpDelayTime);

                animator.SetBool("jump", false);
                moveDirection = new Vector3(0, 0, 1);
                moveDirection = transform.TransformDirection(moveDirection);
                moveDirection *= speed;
                if ((Input.GetButton("Jump") || Input.GetKey(KeyCode.W)||swipe.SwipeUp) && jumpDelayTime==jump)
                {
                    status.isJump = true;
                    moveDirection.y = jumpSpeed;
                    animator.SetBool("Slide", false);
                    animator.SetBool("jump", true);
                    
                }
                else
                {
                    moveDirection.y = 0f;
                    status.isJump = false;
                }

                if (Input.GetKey(KeyCode.S)||swipe.SwipeDown)
                {
                    
                    //sliding = true;
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

