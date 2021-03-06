﻿using UnityEngine;
using System.Collections;

public class SoundHelper : MonoBehaviour {
    public static SoundHelper Instance;

    public AudioClip[] rightSound;
    public AudioClip[] leftSound;
    private int rIndex;
    private int lIndex;
    public AudioClip correctSound;
    public AudioClip wrongSound;

    private GameObject go;
    private AudioSource source;


    void Awake()
    {
        // Register the singleton
        if (Instance != null)
        {
            Debug.LogError("Multiple instances of SoundEffectsHelper!");
        }
        Instance = this;
    }
    public void MakeRightSound()
    {
        rIndex = Random.Range(0, rightSound.Length);
        MakeSound(rightSound[rIndex]);
    }

    public void MakeLeftSound()
    {
        lIndex = Random.Range(0, leftSound.Length);
        MakeSound(leftSound[lIndex]);
    }
    public void MakeCorrectSound()
    {
        MakeSound(correctSound);
    }
    public void MakeWrongSound()
    {
        MakeSound(wrongSound);
    }
    private void MakeSound(AudioClip originalClip)
    {
        // As it is not 3D audio clip, position doesn't matter.
        //AudioSource.PlayClipAtPoint(originalClip, transform.position);
        go = new GameObject("OneShotAudio");
        go.transform.position = transform.position;
        source = go.AddComponent<AudioSource>();
        source.clip = originalClip;
        source.volume = 1;
        source.Play();
        Destroy(go, originalClip.length);
    }
    public AudioSource getAudio(){
        return source;
    }
}
