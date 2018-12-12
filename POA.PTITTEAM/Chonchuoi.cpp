#include <bits/stdc++.h>
using namespace std;

#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define  fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define  fo(i,n) 		for(int i=0; i<(n); ++i)
#define  fix_set(x)     fixed<<setprecision(x)
#define  ms(a,x)    	memset(a, x, sizeof a)
#define  all(x)         (x).begin(), (x).end()
#define  allarr(x,n)	(x, x + n)


typedef double db;
typedef long long ll;
ll const MAX = 1e18;
ll const Base = 1;

inline ll fpow(ll a,ll x) {if(x==0)return 1;	if(x&1) {return a*fpow(a,x-1)%Base;} else{ll t=fpow(a,x/2);return t*t%Base;}}  //tinh (a^x) % Base
inline ll diMod(ll A, ll B){(A * fpow(B, Base-2)) % Base;};		//tinh (A/B) % Base

//link:
//====================================================


//declare
ll n;
ll fr,sd;
//============//

bool cmp(ll a, ll b)
{
	return a > b;
}

void solve()
{
	cin>>n;
	ll a[n+5];
	vector < pair <ll,ll> > banana;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(ll i=0;i<n;i++)
	{
		cin>>sd;
		
		banana.push_back(make_pair(a[i],sd));
	}
	sort(banana.rbegin(),banana.rend());
	if(banana[0].first > 10&& banana[0].second > 20)
		cout<<"yes";
	else cout<<"no";	
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	Input;
//	Output;
	solve();
	return 0;
}
