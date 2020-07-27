
using UnityEngine;

public class TimeManager : MonoBehaviour
{
    public float slowDownFactor = 0.05f;
    public float slowDownLength = 2f;
    public float TimeConstant = 1f;
    
    public void DoSlowMotion()
    {
        Time.timeScale = slowDownFactor;
        Time.fixedDeltaTime = Time.timeScale * .02f;
    }

    // Update is called once per frame
    void Update()
    {
        Time.timeScale += (TimeConstant / slowDownLength) * Time.unscaledDeltaTime;
        Time.timeScale = Mathf.Clamp(Time.timeScale, 0f, 1f);
    }
}
