using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIPosition : MonoBehaviour
{
    public Vector2 position = Vector2.zero;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        var x = Screen.width - Screen.width / position.x;
        var y = Screen.height - Screen.height / position.y;
        RectTransform myRectTransform = GetComponent<RectTransform>();
        myRectTransform.position = new Vector3(x,y, myRectTransform.position.z);
    }
}
