using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;

public class ObjectPooling : MonoBehaviour
{
    #region SingleTon
    public static ObjectPooling instance;

    private void Awake()
    {
        instance = this;
        poolDict = new Dictionary<string, Queue<GameObject>>();

        foreach (Pool pool in pools)
        {
            Queue<GameObject> ObjectPool = new Queue<GameObject>();

            for (int i = 0; i < pool.size; i++)
            {
                GameObject obj = Instantiate(pool.perfab);
                obj.SetActive(false);
                ObjectPool.Enqueue(obj);
            }
            poolDict.Add(pool.tag, ObjectPool);
        }
    }
    #endregion

    public Dictionary<string, Queue<GameObject>> poolDict;
    [Serializable]
    public class Pool
    {
        public string tag;
        public GameObject perfab;
        public int size;
    }
    public List<Pool> pools;
    

    public GameObject SpawnFormPool(string tag)
    {
        if(!poolDict.ContainsKey(tag))
        {
            Debug.LogWarning(tag + " not found!!!");
            return null;
        }
        GameObject objToSpawn = poolDict[tag].Dequeue();
        objToSpawn.SetActive(true);
        //objToSpawn.transform.position = pos;
        //objToSpawn.transform.rotation = rot;

        poolDict[tag].Enqueue(objToSpawn);

        return objToSpawn;
    }

    
}
