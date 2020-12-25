using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class position : MonoBehaviour
{
    [Range(-2, 0)]
    public int min = -2;
    [Range(0, 2)]
    public int max =2;
    // Start is called before the first frame update
    void OnEnable()
    {
        
        transform.position = new Vector3(Random.Range(min, max+1), transform.position.y, transform.position.z);
        
    }

    
}
