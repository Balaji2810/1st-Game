using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AssetManager : MonoBehaviour
{
    [SerializeField]
    public List<string> keys;
    [Serializable]
    public class ListWrapper
    {
        public List<string> myList;
    }
    [SerializeField]
    List<ListWrapper> items;

    



    // Start is called before the first frame update
    public Dictionary<string, List<string>>  getAllAssets()
    {
        Dictionary<string, List<string>> AllAssets;

        AllAssets = new Dictionary<string, List<string>>();

        for (int i=0;i<keys.Count;i++)
        {
            AllAssets.Add(keys[i], items[i].myList);
        }
        return AllAssets;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
