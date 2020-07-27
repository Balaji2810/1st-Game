﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoadGenerator : MonoBehaviour
{
   
    public float roadLength = 40;
    public int roadOnScreen = 10;
    public float roadSpawn = 0;
    public GameObject DummyRoad;
    public int DummyRoadLength;

    public AvailablePrefabs AP;

    private PlayerStatus player;

    List<GameObject> Roads;
    // Start is called before the first frame update
    void Start()
    {
        Roads = AP.returnObject();
       
    }

    // Update is called once per frame
    void Update()
    {
        try
        {
            player = GameObject.Find("player Root").GetComponentInChildren<PlayerStatus>();
            if(player.MovedDistance>roadSpawn-roadOnScreen*roadLength)
            {
                SpawnRoad();
            }
        }
        catch
        {

        }
    }

    void SpawnRoad()
    {
        GameObject go;
        //dummyRoad
        go = Instantiate(DummyRoad);
        go.transform.parent = transform;
        go.transform.position = Vector3.forward * roadSpawn;
        roadSpawn += DummyRoadLength;

        //actualRoad
        go = Instantiate(Roads[Random.Range(0, Roads.Count)]);
        go.transform.parent = transform;
        go.transform.position = Vector3.forward * roadSpawn;
        roadSpawn += roadLength;
    }
}
