using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using extOSC;
using static Synthesizer;

public class OSC_Receiver : MonoBehaviour
{

    [SerializeField] int port = 7001;
    OSCReceiver receiver;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Local IP Address: {0}\n", GetLocalIPAddress());

        receiver = gameObject.AddComponent<OSCReceiver>();
        receiver.LocalPort = port;
        receiver.Bind("/message/address", MessageReceived);
    }

    // Function when midi message received
    protected void MessageReceived(OSCMessage message)
    {
        int[3] midi_message;

        for (int i = 0; i < 3; i++)
        {
            midi_message[i] = message.Values[i].IntValue;
        }

        Synthesizer.instance.play_note(midi_message);
    }

    // Function for getting the local IP aaddress
    string GetLocalIPAddress()
    {
        var host = Dns.GetHostEntry(Dns.GetHostName());
        foreach (var ip in host.AddressList)
        {
            if (ip.AddressFamily == AddressFamily.InterNetwork)
            {
                return ip.ToString();
            }
        }
        throw new Exception("No network adapters with an IPv4 address in the system!");
    }

}
