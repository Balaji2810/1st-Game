using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeleteBlock : MonoBehaviour
{
    

    private void OnCollisionEnter(Collision collision)
    {
        collision.gameObject.SetActive(false);
    }
}
