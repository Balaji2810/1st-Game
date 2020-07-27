using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PathGen : MonoBehaviour
{
    public int RoadLength;
    public GameObject roadCube;
    public Material mainColor;
    public Material sideColor;
    int[] Bitmap(int n,int point)
    {
        int[] bitmap = new int[n];
        bitmap[point] = 1;
        if((point-1)>=0)
        {
            bitmap[point - 1] = 1;
        }
        else
        {
            if(Random.Range(0,3)!=0)
            {
                bitmap[point + 2] = 1;
            }
           
        }
        if((point+1) <n)
        {

            bitmap[point + 1] = 1;
        }
        else
        {
            if (Random.Range(0, 3) != 0)
            {
                bitmap[point - 2] = 1;
            }
        }
       
       
        return bitmap;
    }
    List<int[]>Path(int length)
    {
        List<int[]> roadBitmap = new List<int[]>();
        int startPosition = Random.Range(0, 5);
        roadBitmap.Add(Bitmap(5,startPosition));
        for(int i = 0;i<length-1;i++)
        {
            List<int> row = new List<int>();

            for(int j=0;j<roadBitmap[roadBitmap.Count-1].Length;j++)
            {
                if(roadBitmap[roadBitmap.Count - 1][j]==1)
                {
                    row.Add(j);
                }
            }
            roadBitmap.Add(Bitmap(5, row[Random.Range(0, row.Count)]));

        }
        
        return roadBitmap;
    }
    
    // Start is called before the first frame update
    void Start()
    {
      List<int[]> path = Path(RoadLength);

        for (int i = -2; i <= 2; i++) // x - axis
        {
            for (int length = 0; length < RoadLength; length++)    // z - axis 
            {
                if(path[length][i+2]==1)
                {
                    GameObject go = Instantiate(roadCube);
                    go.transform.parent = gameObject.transform;
                    go.transform.localPosition = new Vector3(i, 0, length);
                    
                    if ((i + length + 2) % 2 == 1)
                    {
                        if (i == -2 || i == 2)
                        {
                            go.GetComponent<MeshRenderer>().material = sideColor;
                        }
                    }
                }
                
            }

        }

    }

   
}
