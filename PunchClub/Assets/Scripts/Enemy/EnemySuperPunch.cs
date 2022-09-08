using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySuperPunch : MonoBehaviour
{
    private Player _player;

    public delegate void PunchEvent();
    public static PunchEvent SuperPunchEnd;

    public delegate void FloatPunchEvent(float damage);
    public static FloatPunchEvent SuperPunchHit;



    [SerializeField]private List<string> _enemySuperPunchesAnimations = new List<string>();

    [SerializeField]private GameObject _redRange;
    [SerializeField]private float _range;

    [SerializeField]private GameObject _puffPrefab;
    [SerializeField]private Transform _puffSpawnPoint;
    [SerializeField]private Animator _animator;


    [SerializeField]private float _zoneSpeed;
    [SerializeField]private float _pauseAnimtion;
    [SerializeField]private float _damage;

    private void Start() 
    {
        _player = PlayerSingleton.SingltonePlayer.GetPlayer();        
    }

    public void SuperPunch(Animator animator)
    {
        int randomPunch = Random.Range(0, _enemySuperPunchesAnimations.Count);
        animator.Play(_enemySuperPunchesAnimations[randomPunch], 0, 0);
    }

    private void TestEvent(){
        Debug.Log("all work");
    }

    public void PauseAnimation()
    {
        StartCoroutine("pauseAnimation");
    }

    public void CreateRedZone() 
    {
        StartCoroutine("createRedZone");
    }


    public void CastSuperPunch() 
    {
        float distanceToPlayer = Vector3.Distance(_player.transform.position, transform.position); 
        if(distanceToPlayer < _range)
        {
            SuperPunchHit?.Invoke(_damage);
        }
    }

    public void CreateFog()
    {
        Instantiate(_puffPrefab, _puffSpawnPoint);
    }

    public void EndSuperPunch()
    {
        SuperPunchEnd?.Invoke();
        Debug.Log("end");
    }

    private IEnumerator createRedZone()
    {
        _redRange.SetActive(true);

        float scaleProgress = 0;

         while(scaleProgress < 1)
        {
            _redRange.transform.localScale = Vector3.Lerp(new Vector3(0,0,0), new Vector3(1,1,1), scaleProgress);
            scaleProgress +=  Time.deltaTime * _zoneSpeed;
            yield return new WaitForSeconds(0.01f);
        }
        _redRange.SetActive(false); 
        yield return null;
    }

    private IEnumerator pauseAnimation()
    {
        _animator.SetFloat("speed", 0);
        yield return new WaitForSeconds(_pauseAnimtion);
        _animator.SetFloat("speed", 1);
        yield return null;
    }

    private void OnDrawGizmos() {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, _range);
    }
}
