using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootMotion.Dynamics;

public class DragMove : MonoBehaviour
{
    public Transform playerRoot;
    public PlayerStatus status;
    public float DragLeftRightSpeed, LeftRightSpeed;

    private GameManager gameManager;
    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    Touch touch;
    // Update is called once per frame
    void FixedUpdate()
    {
        
        if(gameManager.Startgame && status.puppet.state == PuppetMaster.State.Alive && !status.AnimationDeath)
        {
            //left right
            float leftright = playerRoot.position.x + (Input.GetAxis("Horizontal") * LeftRightSpeed * Time.deltaTime);
            
            if(Input.touchCount>0)
            {
                touch = Input.GetTouch(0);
                if(touch.phase==TouchPhase.Moved)
                {
                    leftright += touch.deltaPosition.x * DragLeftRightSpeed * Time.deltaTime;
                }
            }

            
            leftright = Mathf.Clamp(leftright, -2, 2);
            playerRoot.position = new Vector3(leftright, playerRoot.position.y, playerRoot.position.z);
        }
        
    }
}
