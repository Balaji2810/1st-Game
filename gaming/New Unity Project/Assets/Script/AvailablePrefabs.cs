using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvailablePrefabs : MonoBehaviour
{
    [Serializable]
    public struct Object
    {
        public enum Status { Not_Owned = 0, active = 1, deactive = 2 };
        public GameObject go;
        public Status status;
        public string name;
        
    }

    [SerializeField]
    public FileHandler File;
    
    public Object[] Roads;
    public Object[] Obsatcles;

    public List<GameObject> returnObject(int type = 1 )
    {
        Object[] list;

        if (type==1)
        {
          list = Roads;
        }
        else
        {
          list = Obsatcles;
        }

        List<GameObject> roads = new List<GameObject>();
        foreach(Object road in list)
        {
            String name;
            if(road.name =="")
            {
                name = road.go.name;
            }
            else
            {
                name = road.name;
            }
            string status;
            if(File.exist(name))
            {
                
                status = File.load(name);
            }
            else
            {
                File.save(name,road.status.ToString());
                status = road.status.ToString();
            }
           
            if (status=="active")
            {
                roads.Add(road.go);
            }
            
        }
        return roads;
    }
    
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
