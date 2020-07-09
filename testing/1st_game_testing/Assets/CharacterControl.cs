using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterControl : MonoBehaviour
{
    public Animator animator;

    private int right, left,speed;

    // Start is called before the first frame update
    void Start()
    {
        speed = 0;
    }

    // Update is called once per frame
    void Update()
    {
        left = 0;
        right = 0;

        if(Input.GetKey(KeyCode.A))
        {
            left = -1;
        }

        if (Input.GetKey(KeyCode.D))
        {
            right = 1;
        }

        if(Input.GetKeyDown(KeyCode.UpArrow))
        {
            if(speed < 3)
            {
                speed++;
            }
        }

        if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            if (speed > 0)
            {
                speed--;
            }
        }

        animator.SetInteger("turn",right+left);
        animator.SetInteger("speed", speed);
        
    }
}
