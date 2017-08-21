using UnityEngine;
using System.Collections;

public class BackgroundAudio : MonoBehaviour {

    private static GameObject instance = null;

    private AudioSource audioSource;
    private float volume;

    void Start() {
        if (instance == null) {
            instance = gameObject;
            DontDestroyOnLoad(gameObject);
        }
        else {
            Destroy(gameObject);
        }
        audioSource = GetComponent<AudioSource>();
        volume = audioSource.volume;
        if (AudioController.IsAudioEnabled()) {
            audioSource.volume = volume;
        }
        else {
            audioSource.volume = 0;
        }
    }

    void Update() {
        if (AudioController.IsAudioEnabled()) {
            audioSource.volume = Mathf.Lerp(audioSource.volume, volume, Time.deltaTime * 10);
        }
        else {
            audioSource.volume = Mathf.Lerp(audioSource.volume, 0, Time.deltaTime * 10);
        }
    }
}
