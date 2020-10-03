﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
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
        public int points;
        public int cost;
        
    }

    public struct data
    {
        public string status;
        public int points;
        public int cost;
    }

    

   


    public bool Testing = false;
    [SerializeField]
    public FileHandler File;
    
    public Object[] Roads;
    public Object[] Obsatcles;


    public Dictionary<string, data> getObjectDetails(int type = 1)
    {
        Dictionary< string, data > ObjectDetails = new Dictionary<string, data>();

        Object[] list;

        if (type == 1)
        {
            list = Roads;
        }
        else if(type==2)
        {
            list = Obsatcles;
        }
        else
        {
            list = Roads.Concat(Obsatcles).ToArray();
        }

        

        ES3Settings settings = new ES3Settings(ES3.EncryptionType.AES, File.password);
        try
        {

            foreach (Object obj in list)
            {
                string name;
                if (obj.name == "")
                {
                    name = obj.go.name;
                }
                else
                {
                    name = obj.name;
                }

                data go;
                if (Testing)
                {
                    go.cost = obj.cost;
                    go.points = obj.points;
                    go.status = obj.status.ToString();
                    ObjectDetails.Add(name, go);
                }
                else
                {

                    if (File.exist(name))
                    {
                        data temp = (data)ES3.Load(name, File.filename, settings);
                        ObjectDetails.Add(name, temp);
                    }
                    else
                    {
                        go.cost = obj.cost;
                        go.points = obj.points;
                        go.status = obj.status.ToString();

                        ES3.Save(name, go, File.filename, settings);
                        ObjectDetails.Add(name, go);
                    }

                }
            }

        }
        catch
        {
            Debug.LogError("err");
            File.deleteFile();
            return getObjectDetails(type);
        }



        return ObjectDetails;
    }

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
        
        var data = getObjectDetails(type);

        List<GameObject> returnObjects = new List<GameObject>();
        foreach(Object obj in list)
        {
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

                if (data[name].status == "active")
                {
                    returnObjects.Add(obj.go);
                }
            }
            
            
        }
        return returnObjects;
    }

    public Dictionary<string, data> AllObjectValues;
    // Start is called before the first frame update
    void Start()
    {
        AllObjectValues = getObjectDetails(3);
        
    }

    // Update is called once per frame
    public void Score(string name)
    {
        print(name);
        
    }
}
