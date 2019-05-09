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
ll ans = 0, t, n;
bool isP[100005];
bool check[100005];
vector <ll> ps;
//============//

void Prepare()
{
	ms(isP, 0);
	ms(check, 0);
	fu(i, 2, sqrt(100005))
	{
		for(ll j = i*i; j <= 100005; j+=i)
		{
			isP[j] = 1;
		}
	}
	fu(i, 6, 100005)
	{
		if(!isP[i])
			ps.push_back(i);
	}
	fo(i, ps.size())
	{
		for(ll j = ps[i]; j <= 100005; j+=ps[i])
			check[j] = 1;
	}
	check[1] = 1;
//	fo(i, 100)
//		cout << i << " " << check[i] << endl;
}

void Solve()
{
	cin >> t;
	Prepare();
	while(t--)
	{
		cin >> n;
		ll a[100005];
		fo(i, n)
		{
			cin >> a[i];
		}
		a[n] = 17;
		ll tmp = 0;
		fo(i, n+1)
		{
			if (!check[a[i]])
			{
				//cout << a[i] << endl;
				tmp++;
			}
			else
			{
				ans = max(ans, tmp);
				tmp = 0;
			}
		}
		cout << ans << endl;
		ans = 0;
	}
}




//=============================================================================//

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifdef RAVENCLAW
		Infile;
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
