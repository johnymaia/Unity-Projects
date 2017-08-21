using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.UI.Extensions;
using SimpleSuffle;

public class GameController : MonoBehaviour
{
    #region Class

    [System.Serializable]
    public class MenuFields
    {
        public Instructions.InstructionsFields instructions;
    }

    [System.Serializable]
    public class FirstStepFields
    {
        [System.Serializable]
        public class SuiteOfClothing
        {
            [System.Serializable]
            public class Clothing
            {
                public GameObject head;
                public GameObject shirt;
                public GameObject pants;
                public GameObject shoe;
            }

            public Clothing[] antique;
            public Clothing[] mordern;
        }

        public SuiteOfClothing girlSuiteClothes;
        public SuiteOfClothing boysSuiteClothes;
        public Image[] imgBody;
        public Sprite meninaSpr;
        public Sprite meninoSpr;
        public Transform slotSpawn;
        public Animator step;
        public Instructions.InstructionsFields instructions;
        public PopupFeed.FeedMessage feedbackCorrect;
        public PopupFeed.FeedMessage feedbackWorgnHead;
        public PopupFeed.FeedMessage feedbackWorgnShirt;
        public PopupFeed.FeedMessage feedbackWorgnPants;
        public PopupFeed.FeedMessage feedbackWorgnShoe;
        public AudioClip clipInicial;

        List<GameObject> spawnClothes = new List<GameObject>();

        public List<GameObject> SpawnClothes
        {
            get
            {
                return spawnClothes;
            }

            set
            {
                spawnClothes = value;
            }
        }
    }

    [System.Serializable]
    public class SecondStepFields
    {
        public Transform toySpawn;
        public Transform[] toysSlotSpwanMorden;
        public Transform[] toysSlotSpwanAntique;
        public GameObject[] toysPrefab;
        public Instructions.InstructionsFields instructions;
        public PopupFeed.FeedMessage feedbackCorrect;
        public PopupFeed.FeedMessage feedbackWorgn;
    }

    [System.Serializable]
    public class ThirdStepFields
    {
        [System.Serializable]
        public class PairsOfCards
        {
            public GameObject cardImg;
            public GameObject cardText;
        }

        public int pairsAmount;
        public Transform gridSpawnCards;
        public PairsOfCards[] cards;
        public PopupFeed.FeedMessage feedFinish;
        public Instructions.InstructionsFields instructions;
        public Card firstCard;
        public Card secondCard;

        private bool isEnlivening;
        List<Card> cardsSpawned = new List<Card>();

        public List<Card> CardsSpawned
        {
            get
            {
                return cardsSpawned;
            }

            set
            {
                cardsSpawned = value;
            }
        }

        public bool IsEnlivening
        {
            get
            {
                return isEnlivening;
            }

            set
            {
                isEnlivening = value;
            }
        }
    }

    [System.Serializable]
    public class PopupFeed
    {
        [System.Serializable]
        public class FeedMessage
        {
            public string txt;
            public Sprite spr;
            public AudioClip clip;
            public Color txtColor;
        }

        public Text text;
        public Image img;
        public CanvasGroup cg;
        public Animator anim;
        public GameObject btnJN;
        public GameObject textClick;
    }

    [System.Serializable]
    public class Instructions
    {
        [System.Serializable]
         public class InstructionsFields
         {
            [Multiline]
            public string txt;
            public Sprite spr;
            public AudioClip clip;
         }

        public Text text;
        public Image img;
        public CanvasGroup cg;
        public Animator anim;
        public GameObject btnInstructions;
    }

    #endregion

    #region Fields

    public static GameController instance;
    public MenuFields menuFields;
    public FirstStepFields firstStepFields;
    public SecondStepFields secondStepFields;
    public ThirdStepFields thirdStepFields;
    public PopupFeed popupFeed;
    public Instructions instructions;

    private bool hasFinish = false;

    private ScreenState state = ScreenState.menu;
    private Instructions.InstructionsFields currentInstrutions;
    private Animator stepAnimator;
    private GameObject currentObj;

    List<GameObject> toysToSpawn = new List<GameObject> ();

    #endregion

    #region Propetis

    public ScreenState State
    {
        get
        {
            return state;
        }

        set
        {
            state = value;
        }
    }

    public bool HasFinish
    {
        get
        {
            return hasFinish;
        }

        set
        {
            hasFinish = value;
        }
    }

    #endregion

    #region Unity Methods

    void Awake ()
    {
        instance = this;
        stepAnimator = GameObject.Find ("Canvas").GetComponent<Animator> ();
        
    }

    void Start()
    {
    }

    void Update ()
    {
        if (Input.GetKeyDown (KeyCode.Alpha1))
            MenuToFisrtStep();
        if (Input.GetKeyDown (KeyCode.Alpha2))
            FirstStepToSecondStep ();
        if (Input.GetKeyDown (KeyCode.Alpha3))
            SecondStepToThirdStep ();
    }

    #endregion

    #region Private Methods

    #region FirstStep Methods

    private void AddClothesToListSpawn(FirstStepFields.SuiteOfClothing.Clothing c)
    {
        if(c.head != null)
            firstStepFields.SpawnClothes.Add (c.head);
        if (c.shirt != null)
            firstStepFields.SpawnClothes.Add (c.shirt);
        if (c.pants != null)
            firstStepFields.SpawnClothes.Add (c.pants);
        if (c.shoe != null)
            firstStepFields.SpawnClothes.Add (c.shoe);
    }

    public void SpawnClothes ()
    {
        currentObj = Instantiate (firstStepFields.SpawnClothes[firstStepFields.SpawnClothes.Count - 1]);
        currentObj.transform.SetParent (firstStepFields.slotSpawn);
        currentObj.transform.localScale = Vector3.one;
        currentObj.transform.localPosition = Vector3.zero;
        firstStepFields.SpawnClothes.Remove (firstStepFields.SpawnClothes[firstStepFields.SpawnClothes.Count - 1]);
    }

    private bool FirstStepIsFinish ()
    {
        return firstStepFields.SpawnClothes.Count == 0 && firstStepFields.slotSpawn.childCount == 0;
    }

    #endregion

    #region SecondStep Methods

    private void AddToysToListSpawn ()
    {
        for (int i = 0; i < secondStepFields.toysPrefab.Length; i++)
            toysToSpawn.Add (secondStepFields.toysPrefab[i]);

        ShufflesList (toysToSpawn);
    }

    private void SpanwToy ()
    {
        currentObj = Instantiate (toysToSpawn[toysToSpawn.Count - 1]);
        currentObj.transform.SetParent (secondStepFields.toySpawn);
        currentObj.transform.localScale = Vector3.one;
        currentObj.transform.localPosition = Vector3.zero;
        toysToSpawn.Remove (toysToSpawn[toysToSpawn.Count - 1]);
    }

    private bool SecondStepIsFinish ()
    {
        return toysToSpawn.Count == 0;
    }

    #endregion

    #region ThirdStep Methods

    private void SpawnCards()
    {
        thirdStepFields.CardsSpawned.Clear();
        List<ThirdStepFields.PairsOfCards> pairs = new List<ThirdStepFields.PairsOfCards>();

        for (int i = 0; i < thirdStepFields.cards.Length; i++)
            pairs.Add(thirdStepFields.cards[i]);

        pairs.Shuffle();

        List<Card> cards = new List<Card>();

        for (int i = 0; i < thirdStepFields.pairsAmount; i++)
        {
            cards.Add(pairs[i].cardImg.GetComponent<Card>());
            cards.Add(pairs[i].cardText.GetComponent<Card>());
        }

        cards.Shuffle();

        for (int i = 0; i < cards.Count; i++)
        {
            GameObject c1 = Instantiate(cards[i].gameObject);

            c1.transform.SetParent(thirdStepFields.gridSpawnCards);
            thirdStepFields.CardsSpawned.Add(c1.GetComponent<Card>());
        }

        Invoke("HideCards", 3f);
        Invoke("ActiveClickCards", 4.5f);
    }

    private void HideCards ()
    {
        for (int i = 0; i < thirdStepFields.CardsSpawned.Count; i++)
            thirdStepFields.CardsSpawned[i].HandleClickCard();
    }

    private void ActiveClickCards()
    {
        for (int i = 0; i < thirdStepFields.CardsSpawned.Count; i++)
        {
            //thirdStepFields.CardsSpawned[i].HandleClickCard();
            thirdStepFields.CardsSpawned[i].Cg.blocksRaycasts = true;
        }

    }

    private void DesactiveClickCards()
    {
        for (int i = 0; i < thirdStepFields.CardsSpawned.Count; i++)
        {
            //thirdStepFields.CardsSpawned[i].HandleClickCard();
            thirdStepFields.CardsSpawned[i].Cg.blocksRaycasts = false;
        }
    }

    private void HideSelectCards()
    {
        thirdStepFields.firstCard.HandleClickCard();
        thirdStepFields.secondCard.HandleClickCard();
        thirdStepFields.CardsSpawned.Add(thirdStepFields.firstCard);
        thirdStepFields.CardsSpawned.Add(thirdStepFields.secondCard);
        thirdStepFields.firstCard = null;
        thirdStepFields.secondCard = null;
    }

    #endregion

    #region General Methods

    private void PlayClipNarracao(AudioClip clip)
    {
        AudioNarracao.instance.PlayClip (clip);
    }

    private void StopClipNarracao()
    {
        AudioNarracao.instance.PauseClip ();
    }

    private void ShufflesList(List<GameObject> list)
    {
        for (int i = 0; i < list.Count; i++)
        {
            GameObject temp = list[i];
            int randomIndex = Random.Range (i, list.Count);
            list[i] = list[randomIndex];
            list[randomIndex] = temp;
        }
    }

    #endregion

    #endregion

    #region Public Methods

    #region FirstStep Methods

    public void SetGirl()
    {
        AddClothesToListSpawn (firstStepFields.girlSuiteClothes.antique[Random.Range (0, firstStepFields.girlSuiteClothes.antique.Length)]);
        AddClothesToListSpawn (firstStepFields.girlSuiteClothes.mordern[Random.Range (0, firstStepFields.girlSuiteClothes.mordern.Length)]);

        for (int i = 0; i < firstStepFields.imgBody.Length; i++)
        {
            firstStepFields.imgBody[i].sprite = firstStepFields.meninaSpr;
            firstStepFields.imgBody[i].SetNativeSize ();
        }

        ShufflesList (firstStepFields.SpawnClothes);
        SpawnClothes ();
        instructions.btnInstructions.SetActive (true);
        currentInstrutions = firstStepFields.instructions;
        OpenInstructions ();
        firstStepFields.step.Play ("OpenSecondStep");
    }

    public void SetBoy()
    {
        AddClothesToListSpawn (firstStepFields.boysSuiteClothes.antique[Random.Range (0, firstStepFields.boysSuiteClothes.antique.Length)]);
        AddClothesToListSpawn (firstStepFields.boysSuiteClothes.mordern[Random.Range (0, firstStepFields.boysSuiteClothes.mordern.Length)]);

        for (int i = 0; i < firstStepFields.imgBody.Length; i++)
        {
            firstStepFields.imgBody[i].sprite = firstStepFields.meninoSpr;
            firstStepFields.imgBody[i].SetNativeSize ();
        }

        ShufflesList (firstStepFields.SpawnClothes);
        SpawnClothes ();
        instructions.btnInstructions.SetActive (true);
        currentInstrutions = firstStepFields.instructions;
        OpenInstructions ();
        firstStepFields.step.Play ("OpenSecondStep");
    }

    public void AnswerCorrectClothes ()
    {
        if (FirstStepIsFinish ())
            Invoke ("FinisFirstStep", 3f);
        else
            SpawnClothes ();
    }

    public void AnswerWorgnClothes (TypeClothes type)
    {
        switch (type)
        {
            case TypeClothes.head:
                OpenFeed (firstStepFields.feedbackWorgnHead);
                break;
            case TypeClothes.shirt:
                OpenFeed (firstStepFields.feedbackWorgnShirt);
                break;
            case TypeClothes.pants:
                OpenFeed (firstStepFields.feedbackWorgnPants);
                break;
            case TypeClothes.shoe:
                OpenFeed (firstStepFields.feedbackWorgnShoe);
                break;
        } 
    }

    public void FinisFirstStep()
    {
        OpenFeed (firstStepFields.feedbackCorrect);
    }

    #endregion

    #region SecondStep Methods

    public void AnswerCorrectToys ()
    {
        if (SecondStepIsFinish ())
            Invoke ("FinishSecondStep", 3f);
        else
            SpanwToy ();
    }

    public void AnswerWorgnToys ()
    {
        OpenFeed (secondStepFields.feedbackWorgn);
    }

    public void FinishSecondStep()
    {
        OpenFeed (secondStepFields.feedbackCorrect);
    }

    #endregion

    #region ThirdStep Methods

    public void SelectCard(Card c)
    {
        if (hasFinish)
            return;
        if (thirdStepFields.IsEnlivening)
            return;

        DesactiveClickCards();

        if (thirdStepFields.firstCard == null)
        {
            thirdStepFields.firstCard = c;
            thirdStepFields.CardsSpawned.Remove(thirdStepFields.firstCard);
        }
        else if(thirdStepFields.secondCard == null)
        {
            thirdStepFields.secondCard = c;
            thirdStepFields.CardsSpawned.Remove(thirdStepFields.secondCard);
        }


        if(thirdStepFields.firstCard != null && thirdStepFields.secondCard != null)
        {
            if(thirdStepFields.firstCard.id == thirdStepFields.secondCard.id)
            {
                thirdStepFields.firstCard = null;
                thirdStepFields.secondCard = null;

                if (thirdStepFields.CardsSpawned.Count == 0)
                {
                    HasFinish = true;
                    Invoke ("FinishthirhdStep", 3f);
                }               
            }
            else
            {
                Invoke("HideSelectCards", 0.6f);
            }
        }
        Invoke("ActiveClickCards", 0.6f);
    }

    public void FinishthirhdStep()
    {
        popupFeed.btnJN.SetActive (true);
        popupFeed.textClick.SetActive (false);
        OpenFeed (thirdStepFields.feedFinish);
    }

    #endregion

    #endregion

    #region Steps Managers

    public void MenuToFisrtStep()
    {
        state = ScreenState.firstStep;
        stepAnimator.Play ("MenuToFirstStep");
        PlayClipNarracao (firstStepFields.clipInicial);
        
    }

    public void FirstStepToSecondStep ()
    {
        state = ScreenState.secondStep;
        stepAnimator.Play ("MenuToSecondStep");
        currentInstrutions = secondStepFields.instructions;
        OpenInstructions ();
        AddToysToListSpawn ();
        SpanwToy ();
    }

    public void SecondStepToThirdStep ()
    {
        state = ScreenState.thirdstep;
        currentInstrutions = thirdStepFields.instructions;
        OpenInstructions();
        stepAnimator.Play ("SecondStepToThirdStep");
    }

    #endregion

    #region Feed Methods

    private void OpenFeed (PopupFeed.FeedMessage f)
    {
        popupFeed.cg.blocksRaycasts = true;
        popupFeed.text.color = f.txtColor;
        popupFeed.text.text = f.txt;
        popupFeed.img.sprite = f.spr;
        popupFeed.img.SetNativeSize ();
        PlayClipNarracao (f.clip);
        popupFeed.anim.Play("Open");
    }

    public void CloseFeed ()
    {
        popupFeed.cg.blocksRaycasts = false;
        popupFeed.anim.Play("Close");
        StopClipNarracao ();

        switch (state)
        {
            case ScreenState.firstStep:
                if (FirstStepIsFinish ())
                    Invoke ("FirstStepToSecondStep", 2f);
                break;
            case ScreenState.secondStep:
                if (SecondStepIsFinish ())
                    Invoke ("SecondStepToThirdStep", 2f);
                break;
            case ScreenState.thirdstep:
                break;
        }
    }

    #endregion

    #region Intrucoes Methods

    public void OpenInstructions ()
    {
        instructions.cg.blocksRaycasts = true;
        instructions.text.text = currentInstrutions.txt;
        instructions.img.sprite = currentInstrutions.spr;
        instructions.img.SetNativeSize ();
        PlayClipNarracao (currentInstrutions.clip);
        instructions.anim.Play ("Open");
    }

    public void CloseInstructions ()
    {
        instructions.cg.blocksRaycasts = false;
        instructions.anim.Play ("Close");
        StopClipNarracao ();

        if (state == ScreenState.thirdstep && thirdStepFields.CardsSpawned.Count == 0)
        {
            SpawnCards();
        }
         
    }

    #endregion

    #region Enum Methods

    public enum TypeToys
    {
        Modern,
        Antique
    }

    public enum ScreenState
    {
        menu,
        firstStep,
        secondStep,
        thirdstep
    }

    public enum TypeClothes
    {
        head,
        shirt,
        pants,
        shoe
    }

    #endregion
}
