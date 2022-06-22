using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using extOSC;

public class OSC_Receiver : MonoBehaviour
{

    [SerializeField] int port = 7001;
    OSCReceiver receiver;

    // Start is called before the first frame update
    void Start()
    {
        receiver = gameObject.AddComponent<OSCReceiver>();
        receiver.LocalPort = port;
        receiver.Bind("/message/address", MessageReceived);
    }

    // Function when midi message received
    protected void MessageReceived(OSCMessage message)
    {
        var on_off = message.Values[0].IntValue;
        var note = message.Values[1].IntValue;
        var velocity = message.Values[2].IntValue;
        Vector3 position = transform.position;
        if (on_off == 144)
        {
            position.y = 2;
            transform.position = position;
        }
        else
        {
            position.y = 0;
            transform.position = position;
        }
        Debug.Log(on_off);
        // Debug.Log(on_off.GetType());
    }
}
