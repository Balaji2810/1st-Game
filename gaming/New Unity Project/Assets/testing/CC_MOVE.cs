using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CC_MOVE : MonoBehaviour
{
    PlayerStatus player;
    public Vector3 offSet;
    private void LateUpdate()
    {
        try
        {
            player = GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<PlayerStatus>();

            transform.position = new Vector3(offSet.x,0+ offSet.y, player.MovedDistance+ offSet.z);
        }
        catch
        {

        }
    }
}
