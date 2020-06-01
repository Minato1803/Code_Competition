#include <bits/stdc++.h>
using namespace std;
 
#define  Infile        	freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)
#define  fu(i,a,b) 		for(long long i=(a); i<=(b); ++i)
#define  fd(i,a,b) 		for(long long i=(a); i>=(b); --i)
#define  fo(i,n) 		for(long long i=0; i<(n); ++i)
#define  fix_set(x)     fixed<<setprecision(x)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  pb				push_back
#define  mp 			make_pair
 
 
typedef double db;
typedef long long ll;
clock_t TimeBegin, TimeEnd;
ll const INF = 1e18;
ll const Base = 1;
 
 
inline ll mod(string num, ll a);
inline ll diMod(ll A, ll B);
inline ll fpow(ll a,ll x);
inline void Tstart();
inline void Tstop();
 
 
 
 

//declare
ll n,m,p;
vector <pair<ll,ll>> jud;
vector <pair<ll,ll>> tar;
vector <pair<ll,ll>> stored;
//============//

db dis(ll ax, ll ay, ll bx, ll by)
{
	db result = (ax-bx)*(ax-bx)*1.0 + (ay-by)*(ay-by)*1.0;
	return sqrt(result);
}
 
void Solve()
{
	cin>>n>>m>>p;
	ll tmpa, tmpb;
	for(ll i = 0 ;i<n;i++)
	{
		cin>>tmpa>>tmpb;
		jud.pb(mp(tmpa,tmpb));
	}
	sort(jud.begin(),jud.end());
	for(ll i = 0 ;i<n;i++)
	{
		cin>>tmpa>>tmpb;
		tar.pb(mp(tmpa,tmpb));
	}
	sort(tar.begin(),tar.end());
	for(ll i = 0 ;i<n;i++)
	{
		cin>>tmpa>>tmpb;
		stored.pb(mp(tmpa,tmpb));
	}
	sort(stored.begin(),stored.end());
	db  minn = dis(jud[0].fst, jud[0].snd, tar[0].fst, tar[0].snd);
	ll posMin = 0;
	db result = 0;
	for(ll i = 0;i<n;i++)
	{
		minn = dis(jud[i].fst, jud[i].snd, tar[i].fst, tar[i].snd);
		posMin = i;
		for(ll j = i;j<m;j++)
		{
			db tmp = dis(jud[i].fst, jud[i].snd, tar[j].fst, tar[j].snd);
			if(tmp < minn )
			{
				minn = tmp;
				posMin = j;
			}
		}
		swap(tar[i], tar[posMin]);		
		result += minn;
	}
//	cout<<result<<endl;
	minn = dis(jud[0].fst, jud[0].snd, stored[0].fst, stored[0].snd);
	posMin = 0;
	for(ll i = 0;i<n;i++)
	{
		minn = dis(jud[i].fst, jud[i].snd, tar[i].fst, tar[i].snd);
		posMin = i;
		for(ll j = i;j<p;j++)
		{
			db tmp = dis(jud[i].fst, jud[i].snd, stored[j].fst, stored[j].snd);
			if(tmp < minn )
			{
				minn = tmp;
				posMin = j;
			}
		}
		swap(tar[i], tar[posMin]);
		result+=minn;
	}
	cout<<fix_set(6)<<result<<endl; 
}
 
 
//=============================================================================//
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//Infile;
	//Outfile;
	Solve();
 
	return 0;
}
 
//=============================================================================//
//=============================================================================//
 
inline ll mod(string num, ll a) 
{ 
	// tinh string % a
    ll res = 0; 
    fo(i, num.length()) 
         res = (res*10 + (ll)num[i] - '0') %a;
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
 
inline void Tstart()
{
	TimeBegin = clock();
}
 
inline void Tstop()
{
	TimeEnd = clock();
	cout << "\nTime elapsed: " << 1000 * (TimeEnd - TimeBegin) / CLOCKS_PER_SEC << " ms\n";
} 
