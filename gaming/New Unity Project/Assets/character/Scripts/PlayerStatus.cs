﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootMotion.Dynamics;

public class PlayerStatus : MonoBehaviour
{
    public CharacterController controller;
    public Animator animator;
    public Transform Root;
    public Transform BodyPart;
    public PuppetMaster puppet;
    public bool AnimationDeath = false;
    public GameObject Shock;

    private float groundLevel = 0.5f;
    private float movedDistance;
    private float leftRight = 0;
    private float groundLevelTemp;
    // Start is called before the first frame update
    void Start()
    {
       

    }

    // Update is called once per frame
    void Update()
    {
       if(puppet.state == PuppetMaster.State.Alive && !AnimationDeath)
        {
            if(controller.isGrounded)
            {
                groundLevel = Root.position.y;

                
            }

           

            leftRight = Root.position.x;
        }
        movedDistance = BodyPart.position.z;

        //print(controller.velocity);

        if (controller.velocity.z == 0)
        {
            
        }
        else
        {
           

        }

        if(controller.velocity.z>17)
        {
            animator.SetInteger("speed", 3);
        }
        else if(controller.velocity.z>5)
        {
            animator.SetInteger("speed",2 );
        }
        else if (controller.velocity.z>0)
        {
            animator.SetInteger("speed", 1);
        }
        else if (controller.velocity.z==0)
        {
            animator.SetInteger("speed", 0);
        }

    }

    IEnumerator DelayDeath(float time)
    {
       
        yield return new WaitForSeconds(time);

        puppet.state = PuppetMaster.State.Dead;
    }

    public void ElectricShock()
    {
        AnimationDeath = true;
        Shock.SetActive(true);
        animator.SetFloat("Blend", Random.Range(0, 4));
        animator.SetBool("ElectricShock",true);
        StartCoroutine(DelayDeath(1.5f));
    }

    public Transform LookAt { get { return BodyPart; } }
    public float LeftRight { get { return leftRight; } }
    public float MovedDistance { get { return movedDistance; } }
    public float GroundLevel { get { return groundLevel; } }

    
}
