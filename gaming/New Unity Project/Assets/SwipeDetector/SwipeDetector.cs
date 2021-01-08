using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwipeDetector : MonoBehaviour
{
    [NonSerializable]
    public bool SwipeLeft, SwipeRight, SwipeUp, SwipeDown;
    private Vector2 startTouchPosition, endTouchPosition;

    // Update is called once per frame
    private void Update()
    {
        SwipeLeft = SwipeRight = SwipeUp = SwipeDown = false;
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
            startTouchPosition = Input.GetTouch(0).position;

        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
        {
            endTouchPosition = Input.GetTouch(0).position;

            if ((endTouchPosition.y > startTouchPosition.y) && transform.position.y < 1.75f)
            {
                SwipeUp = true;
            }
            else if ((endTouchPosition.y < startTouchPosition.y) && transform.position.y > -1.75f)
            {
                SwipeDown = true;
            }
            else if ((endTouchPosition.x < startTouchPosition.x) && transform.position.x > -1.75f)
            {
                SwipeLeft = true;
            }
            else if ((endTouchPosition.x > startTouchPosition.x) && transform.position.x < 1.75f)
            {
                SwipeRight = true;
            }

            
        }
    }

    
}
