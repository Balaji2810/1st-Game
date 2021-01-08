
using RootMotion.Dynamics;
using UnityEngine;

public class SwipeMove : MonoBehaviour
{
    public Transform playerRoot;
    public PlayerStatus status;
    public Swipe swipe;
    public float speed = 5;

    // Start is called before the first frame update
    private GameManager gameManager;
    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    int leftright = 0;

    
    void Update()
    {
        if (gameManager.Startgame && status.puppet.state == PuppetMaster.State.Alive && !status.AnimationDeath)
        {
            if (Input.GetKeyDown(KeyCode.A) || swipe.swipeLeft)
            {
                leftright -= 1;
            }

            if (Input.GetKeyDown(KeyCode.D) || swipe.swipeRight)
            {
                leftright += 1;
            }

            leftright = Mathf.Clamp(leftright, -2,2);
            playerRoot.position = Vector3.Lerp(playerRoot.position, new Vector3(leftright, playerRoot.position.y, playerRoot.position.z),Time.deltaTime*speed);
            
        }
    }
}
