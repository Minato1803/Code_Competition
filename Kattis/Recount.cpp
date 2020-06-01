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
#define	 pb				push_back
#define	 mp				make_pair
 
 
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

//============//
string s = "";
map< string, ll> candidate; 

bool cmp(pair<string, ll> a, pair<string, ll> b)
{
	return a.second > b.second;
}
void Solve()
{
	while(s != "***")
	{
		getline(cin,s);
		if(s == "***")
			break;
		candidate[s]++;
	}
	vector < pair<string,ll> > CountVote;
	for(map<string,ll>::iterator it = candidate.begin();it!= candidate.end();it++)
	{
		CountVote.pb(mp(it->first, it->second));
	}
	sort(CountVote.begin(), CountVote.end(), cmp);
	ll Max = 0;
	ll Count = (CountVote[0]).second;
	for(ll i = 0;i<CountVote.size();i++)
	{
//		cout<<Count<<" "<<CountVote[i].fst<<" "<<CountVote[i].snd<<endl;
		if(Count ==CountVote[i].snd)
		{
			Max++;
		}
	}
//	cout<<Max<<endl;
	if(Max > 1)
	{
		cout<<"Runoff!"<<endl;
	}
	else
	{
		cout<<CountVote[0].first<<endl;
	}
	
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
