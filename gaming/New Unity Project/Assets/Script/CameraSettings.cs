using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;

public class CameraSettings : MonoBehaviour
{
    public GameObject volume;
     Camera cam;
    // Start is called before the first frame update
    void OnEnable()
    {
        cam = GetComponent<Camera>();
        settings();
    }

    public void settings()
    {
        if(PlayerPrefs.GetInt("glow",0) == 0)
        {
            volume.SetActive(false);
            cam.GetUniversalAdditionalCameraData().renderPostProcessing = false;
            cam.GetUniversalAdditionalCameraData().antialiasing = AntialiasingMode.None;
        }
        else
        {
            volume.SetActive(true);
            cam.GetUniversalAdditionalCameraData().antialiasing = AntialiasingMode.FastApproximateAntialiasing;
            cam.GetUniversalAdditionalCameraData().renderPostProcessing = true;

        }
    }
}
