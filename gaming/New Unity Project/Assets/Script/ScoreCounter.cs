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
            if(transform.position.z<player.MovedDistance&&player.puppet.state==PuppetMaster.State.Alive)
            {
                if (ap != null)
                {

                    string name = gameObject.name.Replace("(Clone)", "");

                    int currentPoints = (int)File.load("points", "temp");

                    if (ap.AllObjectValues.ContainsKey(name))
                    {
                        File.save("points", ap.AllObjectValues[name].points + currentPoints, "temp");
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


