using RootMotion.Dynamics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class ScoreCounter : MonoBehaviour
{
    FileHandler File;
    AvailablePrefabs ap;

    private void Start()
    {
        File = GameObject.Find("FileHandler").GetComponent<FileHandler>();
        ap = GameObject.Find("Available Prefabs").GetComponent<AvailablePrefabs>();
    }
    PlayerStatus player;
    void LateUpdate()
    {

        try
        {
            player = GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<PlayerStatus>();
            if((transform.position.z+5)<player.MovedDistance&&player.puppet.state==PuppetMaster.State.Alive&& !(player.AnimationDeath))
            {
                if (ap != null)
                {

                    string name = gameObject.name.Replace("(Clone)", "");

                    ulong currentPoints = (ulong)File.load("fames", "temp");

                    if (ap.AllObjectValues.ContainsKey(name))
                    {
                        File.save("fames", ap.AllObjectValues[name].points + currentPoints, "temp");
                    }
                    GameObject.Find("GameManager").GetComponent<GameManager>().updatePoints();
                    Destroy(this);
                }
            }
        }
        catch
        {

        }
    }

}


