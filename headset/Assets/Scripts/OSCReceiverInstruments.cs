using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using extOSC;
using System;

public class OSCReceiverInstruments : MonoBehaviour
{

    [SerializeField] int port = 7001;
    public Piano piano;
    public Synthesizer synthesizer;
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
        receiver.Bind("/piano", PianoReceived);
        receiver.Bind("/synthesizer", SynthReceived);
    }

    // Function when midi message received
    private void PianoReceived(OSCMessage message)
    {
        Debug.Log("Message Received " + message);
        int on_off = message.Values[0].IntValue;
        int note = message.Values[1].IntValue;
        int velocity = message.Values[2].IntValue;

        //play(note, velocity);

        // Piano sn = this.gameObject.GetComponent<Piano>();
        piano.play_note(on_off, note, velocity);
    }

    // Function when midi message received
    private void SynthReceived(OSCMessage message)
    {
        Debug.Log("Message Received " + message);
        int on_off = message.Values[0].IntValue;
        int note = message.Values[1].IntValue;
        int velocity = message.Values[2].IntValue;

        //play(note, velocity);

        // Synthesizer sn = gameObject.GetComponent<Synthesizer>();
        // Test_Synth sn = gameObject.GetComponent<Test_Synth>();
        synthesizer.play_note(on_off, note, velocity);
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
