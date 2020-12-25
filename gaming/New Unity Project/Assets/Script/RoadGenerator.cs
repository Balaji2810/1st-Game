using System.Collections;
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
        dummyRoad();
        Gen();
        Gen();
        Gen();
        StartCoroutine(roadGen());
        
    }

    void Gen()
    {
        try
        {
            player = GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<PlayerStatus>();
            if (player.MovedDistance > roadSpawn - roadOnScreen * roadLength)
            {
                SpawnRoad();
            }
        }
        catch
        {

        }
    }
    IEnumerator roadGen()
    {
        Gen();
        
        yield return new WaitForSeconds(0.6f);
        StartCoroutine(roadGen());
    }

    void SpawnRoad()
    {
        dummyRoad();
        GameObject go;
        //actualRoad
        if(Roads.Count>0)
        {
            go = ObjectPooling.instance.SpawnFormPool("roads");
            go.GetComponent<RoadPool>().GetRoad(Roads[Random.Range(0,Roads.Count)].name);
            go.transform.SetParent(null);
            go.transform.position = Vector3.forward * roadSpawn;
            roadSpawn += roadLength;
        }
        
    }

    void dummyRoad()
    {
        GameObject go;
        //dummyRoad
        go = ObjectPooling.instance.SpawnFormPool("roads");
        go.transform.parent = transform;
        go.transform.position = Vector3.forward * roadSpawn;
        go.GetComponent<RoadPool>().GetRoad("DummyRoad");
        roadSpawn += DummyRoadLength;
    }
}
