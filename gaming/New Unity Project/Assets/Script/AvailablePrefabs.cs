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
    public bool Testing = false;
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

        List<GameObject> returnObjects = new List<GameObject>();
        foreach(Object obj in list)
        {
            if(Testing)
            {
                string status;
                status = obj.status.ToString();
                if (status == "active")
                {
                    returnObjects.Add(obj.go);
                }
            }
            else
            {
                String name;
                if (obj.name == "")
                {
                    name = obj.go.name;
                }
                else
                {
                    name = obj.name;
                }
                string status;
                if (File.exist(name))
                {

                    status = File.load(name);
                }
                else
                {
                    File.save(name, obj.status.ToString());
                    status = obj.status.ToString();
                }

                if (status == "active")
                {
                    returnObjects.Add(obj.go);
                }
            }
            
            
        }
        return returnObjects;
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
