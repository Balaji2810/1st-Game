using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CopyMove : MonoBehaviour
{
    private PlayerStatus player;
    public new Animation animation;

    // Update is called once per frame
    void Update()
    {
        try
        {
            player = GameObject.Find("player Root").GetComponentInChildren<PlayerStatus>();

            transform.position = Vector3.Lerp(transform.position, new Vector3(player.LeftRight, transform.position.y, transform.position.z), Time.deltaTime * 10f);
            Mathf.Clamp(transform.position .x,- 2.0f, 2.01f);

            if((int)(transform.position.x*100) == (int)(100*player.LeftRight))
            {
                animation.Play("idle");
            }
            else
            {
                animation.Play("walk");
            }
           
        }
        catch
        {

        }
    }
}
