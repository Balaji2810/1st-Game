using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fogFollow : MonoBehaviour
{

    PlayerStatus player;

    public GameObject go;
    private void Awake()
    {
        if (PlayerPrefs.GetInt("fog&others", 0) == 1)
        {
            go.SetActive(true);

        }
        else
        {
            go.SetActive(false);
        }
    }

    private void OnEnable()
    {
        if (PlayerPrefs.GetInt("fog&others", 0) == 1)
        {
            go.SetActive(true);
        }
        else
        {
            go.SetActive(false);
        }
    }


    
    void Update()
    {
        try
        {
            player = GameObject.Find(PlayerPrefs.GetString("name") ).GetComponentInChildren<PlayerStatus>();
            transform.position = new Vector3(transform.position.x, transform.position.y, player.MovedDistance);
        }
        catch
        {

        }
    }
}
