using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BannerController : MonoBehaviour
{
    public bool on;
    private void OnEnable()
    {
        try
        {
            if (on)
            {
                ADManager.instance.ShowBanner();
            }
            else
            {
                ADManager.instance.HideBanner();
            }
        }
        catch
        {

        }
    }
}
