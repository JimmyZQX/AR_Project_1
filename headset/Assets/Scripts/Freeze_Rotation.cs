using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Freeze_Rotation : MonoBehaviour
{
    Quaternion defaultRotation;

    // \ (•◡•) /
    void Awake()
    {
        defaultRotation = transform.rotation;
    }

    void LateUpdate()
    {
        transform.rotation = defaultRotation;
    }
}
