using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReturnGameObject : MonoBehaviour
{
    // Start is called before the first frame update
    private GameObject go;
    public new string name;
    void Start()
    {
        go = this.gameObject;
    }

    // Update is called once per frame
    public GameObject Object()
    {
        go = this.gameObject;
        return go;
    }

    public string Name { get { return name; } }
    public GameObject GObject { get { return go; } }
}
