#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)
#define  lowb(a,x) 		lower_bound(a.begin(),a.end(),x)-a.begin();
#define  upb(a,x) 		upper_bound(a.begin(),a.end(),x)-a.begin();
#define  fu(i,a,b)		for(long long i=(a); i<=(b); ++i)
#define  fd(i,a,b)		for(long long i=(a); i>=(b); --i)
#define  fo(i,n)		for(long long i=0; i<(n); ++i)
#define  fix_set(x)		fixed<<setprecision(x)
#define  ms(a,x)		memset(a, x, sizeof(a))
#define  all(x)			(x).begin(), (x).end()
#define  mp(a,b)		make_pair(a, b)
#define	 fst			first
#define	 snd			second

typedef long long ll;
clock_t TimeBegin, TimeEnd;
ll const INF = LLONG_MAX;
ll LX[] = {-1,0,0,1,-1,-1,1,1}; // 8 - 4
ll LY[] = {0,-1,1,0,-1,1,-1,1}; 


inline ll mod(string num, ll Base);
inline ll diMod(ll A, ll B, ll Base);
inline ll fpow(ll a, ll x, ll Base);
inline string toString(ll n);
inline void Tstart();
inline void Tstop();


//declare
ll a[10000001];

//============//



ll Bao(ll x)
{
	ll S = 0;
	if (x >= 0 && x < 10)
	{
//		if (x > 10)
//			S += (9*10)/2;
//		else
			S += x-0;
	}
	if (x >= 10 && x < 100)
	{
//		if (x > 100)
//			S += (99-10+1)*(99+10)/2*2;
//		else
			S += (x)*2;
	}
	if (x >= 100 && x < 1000)
	{
//		if (x > 1000)
//			S += (999-100+1)*(999+100)/2*3;
//		else
			S += (x)*3;
	}
	if (x >= 1000 && x < 10000)
	{
//		if (x > 10000)
//			S += ((9999-1000+1LL)*(9999+1000)/2)*4LL;
//		else
			S += (x)*4;
	}
	if (x >= 10000 && x < 100000)
	{
//		if (x > 10000)
//			S += ((99999-10000+1LL)*(99999+10000)/2)*5LL;
//		else
			S += (x)*5;
	}
	if (x >= 100000 && x < 1000000)
	{
//		if (x > 100000)
//			S += ((999999-100000+1LL)*(999999+100000)/2)*6LL;
//		else
			S += (x)*6LL;
	}
	if (x >= 1000000 && x < 10000000)
	{
//		if (x > 100000)
//			S += ((999999-100000+1LL)*(999999+100000)/2)*6LL;
//		else
			S += (x)*7LL;
	}
	return S;
}

void Solve()
{
	a[0] = 0;
	for(ll i=1;i<=1e7+3;i++)	
		{
			a[i] += Bao(i) + a[i-1];
		}
//	fo(i, 100)
//		cout << i << " "  << a[i] << endl;
		ll t;
		cin>>t;
		while(t--)
		{
			ll n;
			cin>>n;
			cout << lower_bound(a,a+10000001,n)-a << endl;
		}
	
}


//=============================================================================//

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifdef RAVENCLAW
		//Infile;
		//Outfile;
	#endif
		Solve();

	return 0;
}

//=============================================================================//
//=============================================================================//

inline ll mod(string num, ll Base) 
{ 
    ll res = 0; 
    fo(i, num.length()) 
        res = (res*10 + (ll)num[i] - '0') % Base;
    return res; 
} 

inline ll fpow(ll a, ll x, ll Base)
{
	if(x==0)return 1;	
	if(x&1) 
	{
		return a*fpow(a, x-1, Base)%Base;
	} 
	else
	{
		ll t=fpow(a, x/2, Base);
		return t*t%Base;
	}
}

inline ll diMod(ll A, ll B, ll Base)
{
	//(A/B)%Base
	ll result = (A * fpow(B, Base-2, Base)) % Base; 
	return result;
}

inline string toString(ll n) 
{
	stringstream ss; ss << n;
	return ss.str();
}	

inline void Tstart()
{
	TimeBegin = clock();
}

inline void Tstop()
{
	TimeEnd = clock();
	cout << "\nTime elapsed: " << 1000 * (TimeEnd - TimeBegin) / CLOCKS_PER_SEC << " ms\n";
}
