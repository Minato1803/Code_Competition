#include <bits/stdc++.h>
using namespace std;

#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/input.txt", "w", stdout)
#define  ll             long long
#define  db             double
#define	 fst			first
#define	 snd			second
#define  pb				push_back
#define  mp				make_pair
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  fix_set(x)     fixed<<setprecision(x)
#define  all(x)         (x).begin(), (x).end()
#define  allArr(x,n)	x, x+n
#define  vp(x,y)		vector< pair<x,y> >
#define  testCase		ll t; cin>>t; while(t--)
#define  flr(i,x,n)		for(long long i = (x); i<(n); ++i)
#define  frl(i,n,x)		for(long long i = (n); i>=(x); --i)
#define  filr(it,x)		for(it = (x).begin(); it!=(x).end(); it++)
#define  firl(it,x)		for(it = (x).rbegin(); it!=(x).rend(); it++)


ll const INF = 1e18;
ll const Base = 1;
inline ll mod(string num, ll a);
inline ll diMod(ll A, ll B);
inline ll fpow(ll a,ll x);
inline bool cmpArr(ll a, ll b);
//====================================================================================================
ll n;
//-----------------------------
void Solves()
{
	cin>>n;
	if(n%2)
	{
		cout<<0<<endl;
	}
	else
	{
		cout<<(2<<(n/2-1))<<endl;
	}
	
}

int main()
{
    buff;
//  Input;
//  Output;
    
    /*clock_t start, end;
    	double time_use;
    start = clock();
    	Solves();
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%f seconds", time_use);*/
    
    Solves();
    return 0;
}

//====================================================================================================

inline ll mod(string num, ll a) 
{ 
	// tinh string % a
    ll res = 0; 
    flr(i,0, num.length()) 
         res = (res*10 + (ll) num[i] - '0') %a;
    return res; 
} 
 
inline ll fpow(ll a,ll x)
{
	 //tinh (a^x) % Base
	if(x==0)return 1;	
	if(x&1) 
	{
		return a*fpow(a,x-1)%Base;
	} 
	else
	{
		ll t=fpow(a,x/2);
		return t*t%Base;
	}
}
 
inline ll diMod(ll A, ll B)
{
	//tinh (A/B) % Base
	ll result = (A * fpow(B, Base-2)) % Base; 
	return result;
}

inline bool cmpArr(ll a, ll b)
{
	return a>b;
}
