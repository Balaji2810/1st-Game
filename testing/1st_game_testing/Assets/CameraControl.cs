using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    private PlayerStatus player;


    // Start is called before the first frame update
    void Awake()
    {
        player = GameObject.Find("player Root").GetComponentInChildren<PlayerStatus>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        //transform.LookAt(player.LookAt);
        var targetRotation = Quaternion.LookRotation(player.LookAt.position - transform.position);
        // Smoothly rotate towards the target point.
        transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, LookAtSpeed*Time.deltaTime);

        //Camera move forward
        transform.position = new Vector3(transform.position.x, transform.position.y, player.MovedDistance+offset.z);

        //Camera Ground level
        transform.position = Vector3.Lerp(transform.position, new Vector3(player.LeftRight, player.GroundLevel + offset.y, transform.position.z), Time.deltaTime * JumpSpeed);
        //camera Left Right move
        //transform.position = new Vector3(player.LeftRight, transform.position.y, transform.position.z);
        transform.position = Vector3.Lerp(transform.position, new Vector3(player.LeftRight, transform.position.y, transform.position.z),Time.deltaTime * LeftRightSpeed);

    }
}
