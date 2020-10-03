using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FileHandler : MonoBehaviour
{
    // Start is called before the first frame update
    public string filename;
    public string ScoreFile;
    public string temp;
    public string password;

    

    public void save(string key,int data,string file="score")
    {
        var settings = new ES3Settings(ES3.EncryptionType.AES, password);
        if(file == "score")
        {
            ES3.Save(key, data, ScoreFile, settings);
        }
        else
        {
            ES3.Save(key, data, temp, settings);
        }
        
    }

    public bool exist(string key,string file= "object")
    {
        var settings = new ES3Settings(ES3.EncryptionType.AES, password);
        if(file == "object")
        {
            return ES3.KeyExists(key, filename, settings);
        }
        else if(file == "score")
        {
            return ES3.KeyExists(key, ScoreFile, settings);
        }
        else
        {
            return ES3.KeyExists(key, temp, settings);
        }
        
    }

    public int load(string key, string file = "score")
    {
        var settings = new ES3Settings(ES3.EncryptionType.AES, password);
        if (file == "score")
        {
            return (int)ES3.Load(key, ScoreFile,0, settings);
        }
        else
        {
            return (int)ES3.Load(key, temp,0, settings);
        }
        
    }


    
    public void deleteFile(string file="object")
    {
        var settings = new ES3Settings(ES3.EncryptionType.AES, password);
        if(file=="object")
        {
            ES3.DeleteFile(filename, settings);
        }
        else if (file == "score")
        {
            ES3.DeleteFile(ScoreFile, settings);
        }
        else if (file == "temp")
        {
            ES3.DeleteFile(temp, settings);
        }

    }
}
