using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Piano : MonoBehaviour
{

    public GameObject keyPrefab;
    private GameObject key;
    private AudioSource keyAudio;

    public GameObject parentPiano;

    private string noteName;
    private string[] noteLetters = new string[12] { "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B" };
    private int letterPointer = 0;
    private int noteNumber = 1;
    // Start is called before the first frame update
    void Start()
    {
        for (int i = 24; i <= 107; i++)
        {
            noteName = noteLetters[letterPointer].ToString() + noteNumber.ToString();
            letterPointer += 1;
            if (letterPointer > 11)
            {
                letterPointer = 0;
                noteNumber += 1;
            }

            key = Instantiate(keyPrefab);
            key.name = i.ToString();
            key.transform.SetParent(parentPiano.transform);
            keyAudio = key.GetComponent<AudioSource>();
            keyAudio.clip = Resources.Load("ChoirPiano/" + noteName) as AudioClip;
        }
    }

    // private List<Int16> pressedNotes = new List<Int16>();
    public void play_note(int on_off, int note, int velocity)
    {
        if (on_off == 144)
        {
            //pressedNotes.Add(note);
            this.transform.GetChild(note - 24).GetComponent<AudioSource>().Play();
        }
        else if (on_off == 128)
        {
            //pressedNotes.Remove(note);
            this.transform.GetChild(note - 24).GetComponent<AudioSource>().Stop();
        }
    }
}
