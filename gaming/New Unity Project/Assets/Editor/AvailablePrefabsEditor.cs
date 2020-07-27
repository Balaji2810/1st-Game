using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

//[CustomEditor(typeof(AvailablePrefabs))]
public class AvailablePrefabsEditor : Editor
{
    public override void OnInspectorGUI()
    {
        AvailablePrefabs availablePrefabs = (AvailablePrefabs)target;



        EditorGUIUtility.LookLikeInspector();
        SerializedProperty Object = serializedObject.FindProperty("Roads");
        SerializedProperty File = serializedObject.FindProperty("File");
        EditorGUI.BeginChangeCheck();
        EditorGUILayout.PropertyField(File, true);
        EditorGUILayout.PropertyField(Object, true);
        
        ArrayGUI(Object);
        if (EditorGUI.EndChangeCheck())
            serializedObject.ApplyModifiedProperties();
        EditorGUIUtility.LookLikeControls();


    }
    private void ArrayGUI(SerializedProperty Object)
    {
   

        GUILayout.BeginHorizontal();
        if (GUILayout.Button("Add Object"))
        {
            Object.arraySize++;
        }
        if (GUILayout.Button("Remove Object"))
        {
            Object.arraySize--;
        }
        GUILayout.EndHorizontal();
    }
}
