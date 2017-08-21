using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Card : MonoBehaviour
{
    #region Fields

    public int id;
    public Sprite frontSprite;
    public Sprite backSprite;
    public bool cardHasText;
    public Text cardText;

    private bool isOpening = true;
    private Animator anim;
    private Image img;
    private CanvasGroup cg;

    #endregion

    #region Propetis

    public CanvasGroup Cg
    {
        get
        {
            return cg;
        }

        set
        {
            cg = value;
        }
    }

    #endregion

    #region Unity Methods

    void Awake ()
    {
        anim = GetComponent<Animator> ();
        img = GetComponent<Image> ();
        cg = GetComponent<CanvasGroup>();
    }

    void Start()
    {
        GetComponent<Button>().onClick.AddListener(() => HandleClickCard());
        GetComponent<Button>().onClick.AddListener(() => GameController.instance.SelectCard(GetComponent<Card>()));
    }

    #endregion

    #region Private Methods

    private void EnableOrDisableTextCard(bool b)
    {
        if (cardHasText)
        {
            if (b)
                cardText.enabled = false;
            else
                cardText.enabled = true;
        }
    }

    #endregion

    #region Events Methods

    public void SwitchCardState()
    {
        GameController.instance.thirdStepFields.IsEnlivening = true;
        isOpening = !isOpening;

        if (isOpening)
            img.sprite = frontSprite;
        else
            img.sprite = backSprite;

        EnableOrDisableTextCard (!isOpening);
    }

    public void AnimationEnd()
    {
        GameController.instance.thirdStepFields.IsEnlivening = false;
    }

    #endregion

    #region Public Methods

    public void HandleClickCard()
    {
        if (GameController.instance.thirdStepFields.IsEnlivening)
            return;
        
        anim.Play("Show");
    }

    #endregion

    #region Enum Methods

    #endregion
}
