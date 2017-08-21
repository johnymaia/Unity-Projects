using UnityEngine;
using System.Collections;

public class AudioController : MonoBehaviour {

    private static bool audioHabilitado = true;

    private AudioSource audioSource;
    private float maxVolume = 0;
    private float targetVolume = 0;

    public static void HabilitaAudio() {
        audioHabilitado = true;
    }

    public static void DesabilitaAudio() {
        audioHabilitado = false;
    }

    public static bool IsAudioEnabled() {
        return audioHabilitado;
    }

    void Awake() {
        audioSource = this.GetComponent<AudioSource>();
        maxVolume = audioSource.volume;
        if (audioHabilitado) {
            audioSource.volume = maxVolume;
        }
        else {
            audioSource.volume = 0;
        }
    }

    void Update() {
        if (IsAudioEnabled()) {
            targetVolume = maxVolume;
        }
        else {
            targetVolume = 0;
        }

        if (audioSource.volume != targetVolume) {
            audioSource.volume = Mathf.Lerp(audioSource.volume, targetVolume, Time.deltaTime * 4);
        }
    }
}
