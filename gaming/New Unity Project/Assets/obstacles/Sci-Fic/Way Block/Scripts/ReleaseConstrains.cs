
using UnityEngine;

public class ReleaseConstrains : MonoBehaviour
{
    Rigidbody rb;
    private void OnEnable()
    {
        rb = GetComponent<Rigidbody>();
        rb.constraints = RigidbodyConstraints.FreezePositionY;
    }
    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.name!= "Fame(Clone)")
        {
            
            rb.constraints = 0;
        }
        
    }
}
