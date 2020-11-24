using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StandUpWalk : MonoBehaviour
{
   
    public Transform playerPose;
    public float moveSpeed;
    public CharacterControl player;

    
    

    GameManager gameManager;
    private void Start()
    {
        
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
       
    }

    void Update()
    {
        //Given some means of determining a target point.
        
        //However you want to do that.
        if(!gameManager.Startgame)
        {
            if (player.isWalk && (Vector3.zero - playerPose.localPosition).magnitude>0.25f)
            {
                MoveTowardsTarget();
                
                player.animator.SetInteger("speed", 1);
            }
            else
            {
                player.animator.SetInteger("speed", 0);
            }
            
        }
        else
        {
            playerPose.localPosition = Vector3.zero;
            playerPose.localRotation = Quaternion.Euler(0, 0, 0);
            Destroy(gameObject,5);
        }
        
        
    }

    void MoveTowardsTarget()
    {

        playerPose.localPosition = Vector3.Lerp(playerPose.localPosition, Vector3.zero, Time.deltaTime);
        //playerPose.localRotation = Quaternion.Lerp(playerPose.localRotation, Quaternion.Euler(0,0,0), Time.deltaTime);
        playerPose.localRotation = Quaternion.Euler(0, 0, 0);

    }

    ~StandUpWalk()
    {
        player.CanDie = true;
    }
}
