using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootMotion.Dynamics;

public class CameraControl : MonoBehaviour
{
    /*Manually Created layers
     * Ground - Walkable area
     * Obstcle - Behaviour Collision
     * Puppet - Puppet Master
     * Character - Character mesh and Character Controller
     */
    public Vector3 offset = new Vector3(0,2.5f,-3);
    public float LeftRightSpeed=150;
    public float JumpSpeed=1;
    public float LookAtSpeed = 2;
    public GameManager gameManager;

    private PlayerStatus player;
    private bool init = true;
    private bool afterDead = false;

    private Vector3 temp;
    // Start is called before the first frame update
    void Start()
    {
        temp = new Vector3(offset.x,offset.y,offset.z);
        
    }

    bool camToPosition = false;

    IEnumerator delay()
    {

        yield return new WaitForSeconds(1f);
        camToPosition = true;
        


        StartCoroutine(delay2());
    }

    IEnumerator delay2()
    {

        yield return new WaitForSeconds(2);

        init = false;
        

    }

    public float deadDelayCameraMove = 1;
    IEnumerator deadCamera(float delayTime)
    {

        yield return new WaitForSeconds(delayTime);

        afterDead = true;


    }


    // Update is called once per frame
    void FixedUpdate()
    {

        try
        {
            player = GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<PlayerStatus>();
            
            if (init)
            {
                if (!gameManager.Startgame)
                {
                    offset = new Vector3(temp.x * 1, temp.y - 1.5f, temp.z * -1f);

                    transform.position = Vector3.Lerp(transform.position, new Vector3(player.LeftRight, player.GroundLevel + offset.y + offset.y, player.MovedDistance + offset.z), Time.deltaTime);
                    transform.LookAt(player.LookAt);
                }
                else
                {
                    offset = temp;

                    if (camToPosition)
                    {
                        transform.position = Vector3.Lerp(transform.position, new Vector3(player.LeftRight, transform.position.y, transform.position.z), Time.deltaTime * LeftRightSpeed);
                        transform.position = Vector3.Lerp(transform.position, new Vector3(transform.position.x, player.GroundLevel + offset.y, transform.position.z), Time.deltaTime * JumpSpeed);
                        transform.position = new Vector3(transform.position.x, transform.position.y, player.MovedDistance + offset.z);

                    }
                    else
                    {
                        transform.position = Vector3.Lerp(transform.position, new Vector3(player.LeftRight, player.GroundLevel + offset.y, player.MovedDistance + offset.z), Time.deltaTime * 5);

                    }
                    transform.LookAt(player.LookAt);
                    StartCoroutine(delay());
                }
            }
            else
            {
                



                if (player.puppet.state == PuppetMaster.State.Alive)
                {

                    //transform.LookAt(player.LookAt);
                    var targetRotation = Quaternion.LookRotation(player.LookAt.position - transform.position);
                    // Smoothly rotate towards the target point.
                    transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, LookAtSpeed * Time.deltaTime);

                    //Camera move forward
                    transform.position = new Vector3(transform.position.x, transform.position.y, player.MovedDistance + offset.z);

                    //Camera Ground level
                    transform.position = Vector3.Lerp(transform.position, new Vector3(transform.position.x, player.GroundLevel + offset.y, transform.position.z), Time.deltaTime * JumpSpeed);
                    //camera Left Right move
                    //transform.position = new Vector3(player.LeftRight, transform.position.y, transform.position.z);
                    transform.position = Vector3.Lerp(transform.position, new Vector3(player.LeftRight, transform.position.y, transform.position.z), Time.deltaTime* LeftRightSpeed);




                }
                else
                {
                    //transform.LookAt(player.LookAt);
                    var targetRotation = Quaternion.LookRotation(player.LookAt.position - transform.position);
                    // Smoothly rotate towards the target point.
                    transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, LookAtSpeed * Time.deltaTime);

                    
                    if(afterDead)
                    {
                        //Camera move forward
                        transform.position = Vector3.Lerp(transform.position, new Vector3(transform.position.x, transform.position.y, player.MovedDistance + (offset.z - offset.z)), 3 * Time.deltaTime);

                        //Camera Ground level
                        // transform.position = Vector3.Lerp(transform.position, new Vector3(transform.position.x, player.GroundLevel + offset.y, transform.position.z), Time.deltaTime * JumpSpeed);
                        //camera Left Right move
                        //transform.position = new Vector3(player.LeftRight+offset.x, transform.position.y, transform.position.z);

                        if (player.BodyPart.position.x > 0.75)
                        {
                            transform.position = Vector3.Lerp(transform.position, new Vector3(player.BodyPart.position.x + offset.x, transform.position.y, transform.position.z), Time.deltaTime * 7.5f);

                        }
                        else
                        {
                            transform.position = Vector3.Lerp(transform.position, new Vector3(player.BodyPart.position.x - offset.x, transform.position.y, transform.position.z), Time.deltaTime * 7.5f);
                        }
                    }
                    else
                    {
                        StartCoroutine(deadCamera(deadDelayCameraMove));
                    }
                    
                    
                   

                }
            }
           
            

        }
        catch
        {
            Debug.Log((PlayerPrefs.GetString("name") ));
        }

    }
}
