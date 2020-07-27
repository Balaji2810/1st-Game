using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FileHandler : MonoBehaviour
{
    // Start is called before the first frame update
    public string filename;
    public string password;

    

    public void save(string key,string data)
    {
        var settings = new ES3Settings(ES3.EncryptionType.AES, password);
        ES3.Save(key,data,filename,settings);
    }

    public bool exist(string key)
    {
        var settings = new ES3Settings(ES3.EncryptionType.AES, password);
        return ES3.KeyExists(key, filename, settings);
    }

    public string load(string key)
    {
        var settings = new ES3Settings(ES3.EncryptionType.AES, password);
       return (string)ES3.Load(key,filename, settings);
    }

    
    public void deleteFile()
    {
        var settings = new ES3Settings(ES3.EncryptionType.AES, password);
        ES3.DeleteFile(filename,settings);
    }
}
