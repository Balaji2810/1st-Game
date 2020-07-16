using System.Collections;
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

    private float groundLevel = 0.5f;
    private float movedDistance;
    private float leftRight = 0;
    // Start is called before the first frame update
    void Start()
    {

        
    }

    // Update is called once per frame
    void Update()
    {
       if(puppet.state == PuppetMaster.State.Alive)
        {
            if(controller.isGrounded)
            {
                groundLevel = Root.position.y; 
            }
            movedDistance = BodyPart.position.z ;
            leftRight = Root.position.x;
        }
    }

    public Transform LookAt { get { return BodyPart; } }
    public float LeftRight { get { return leftRight; } }
    public float MovedDistance { get { return movedDistance; } }
    public float GroundLevel { get { return groundLevel; } }

    
}
