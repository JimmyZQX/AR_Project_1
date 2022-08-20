using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using extOSC;
using System;

public class OSC_Receiver : MonoBehaviour
{

    [SerializeField] int port = 7001;
    OSCReceiver receiver;
    // public AudioHelm.HelmController helmController;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Hello!");
        Debug.Log("Local IP Address: " + GetLocalIPAddress());
        Debug.Log("Port: " + port);

        receiver = gameObject.AddComponent<OSCReceiver>();
        receiver.LocalPort = port;
        receiver.Bind("/message/address", MessageReceived);
    }

    // Function when midi message received
    private void MessageReceived(OSCMessage message)
    {
        Debug.Log("Message Received " + message);
        int on_off = message.Values[0].IntValue;
        int note = message.Values[1].IntValue;
        int velocity = message.Values[2].IntValue;

        //play(note, velocity);

        Synthesizer sn = gameObject.GetComponent<Synthesizer>();
        // Test_Synth sn = gameObject.GetComponent<Test_Synth>();
        sn.play_note(on_off, note, velocity);
    }

    // Function for getting the local IP aaddress
    string GetLocalIPAddress()
    {
        var host = System.Net.Dns.GetHostEntry(System.Net.Dns.GetHostName());
        foreach (var ip in host.AddressList)
        {
            if (ip.AddressFamily == System.Net.Sockets.AddressFamily.InterNetwork)
            {
                return ip.ToString();
            }
        }
        throw new Exception("No network adapters with an IPv4 address in the system!");
    }

}
