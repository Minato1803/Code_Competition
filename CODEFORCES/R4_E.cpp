#include <bits/stdc++.h>
using namespace std;

#define  Input        	freopen("input.txt", "r", stdin)
#define  Output			freopen("output.txt", "w", stdout)
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
//============//

//ll score(ll k[],ll h[],ll n,ll i)
//{
//	ll max=0;
//	for(ll j=0;j<n;j++){
//		if(j!=i){
//		if(k[i]>k[j]){max+=3;}
//		if(k[i]==k[j]){
//			for(ll j=0;j<n;j++){
//				if(h[i]>h[j]){ max+=3;}
//				if(h[i]==h[j]){ max+=1;}
//					}
//		}
//	}
//	}
//return max;
//}

void solve()
{
		ll n;
	cin>>n;
	string *a=new string[n];
	vector< tuple<ll,ll,string> > team; 
	for(ll j=0;j<n;j++){

		ll score,pen;
		cin>>a[j];
		cin>>score>>pen;
		team.push_back(make_tuple(score,pen,a[j]));
	}
	sort(all(team));
//	for( ll i=0;i<5;i++)
//	{
//		cout<<get<0>(team[i])<<" "<<get<1>(team[i])<<" "<<get<2>(team[i])<<endl;
//	}
	cout<< get<2>(team[n-1]);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//Input;
	//Output;
	solve();
	return 0;
}

