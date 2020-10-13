using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoadsAssets : MonoBehaviour
{
    [SerializeField]
    public List<string> keys;


    // Start is called before the first frame update
    public List<string> getAllAssets()
    {
        return keys;
    }

    
}
