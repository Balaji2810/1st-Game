using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FreeLookController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private Touch touch;
    public float speed;
    
    void Update()
    {
        if(Input.touchCount>0)
        {
            touch = Input.GetTouch(0);

            if(touch.phase == TouchPhase.Moved)
            {
                print(touch.deltaPosition);
            }
        }
    }
}
