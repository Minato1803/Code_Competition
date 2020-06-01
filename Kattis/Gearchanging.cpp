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
 
 
 
 
 
struct coor
{
	db x;
	db y;
};
 
//declare
ll n,m,c,d;
db p;
vector <ll> cranks;
vector <ll> bkWheels;
vector <db> cadences;
//============//
 
void Solve()
{
	cin>>n>>m>>p;
	for(ll i = 0;i<n;i++)
	{
		cin>>c;
		cranks.pb(c);
	}
	for(ll i = 0;i<m;i++)
	{
		cin>>d;
		bkWheels.pb(d);
	}
	for(ll i = 0;i<n;i++)
	{
		for(ll j = 0;j<m;j++)
		{
			cadences.pb((db) cranks[i]/bkWheels[j]);
		}
	}
	sort(cadences.begin(), cadences.end());
//	for(auto x:cadences)
//	{
//		cout<<x<<" ";
//	}
//	cout<<endl;
	db pos = cadences[0];
	bool check = 1;
	for(ll i = 1;i<cadences.size();i++)
	{
		if(pos+ pos*(p/100.0) < cadences[i])
		{
//			cout<<pos<<" "<<i<<" "<<cadences[i]<<endl;
			cout<<"Time to change gears!"<<endl;
			return;
		}
		else
			pos = cadences[i];
	}
	cout<<"Ride on!"<<endl;	
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
