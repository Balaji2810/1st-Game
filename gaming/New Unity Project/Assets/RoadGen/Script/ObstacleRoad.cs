using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleRoad : MonoBehaviour
{
    public int RoadLength;
    AvailablePrefabs AP;

    List<GameObject> Obstacles;
    // Start is called before the first frame update
    void Start()
    {
        AP = GameObject.Find("Available Prefabs").GetComponent<AvailablePrefabs>();
        Obstacles = AP.returnObject(2);
        for (int i = Random.Range(0,10);i<RoadLength;i+= Random.Range(10, 15))
        {
            if(Random.Range(0,3)!=0)
            {
                GameObject go;
                go = Instantiate(Obstacles[Random.Range(0, Obstacles.Count)]);
                go.transform.parent = transform;
                go.transform.localPosition = new Vector3(go.transform.localPosition.x, go.transform.localPosition.y, i);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
