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
ll n,m,a,b,Count=0;
//============//

void solve()
{
	cin>>n>>m>>a>>b;
	ll bef, aft;
	if(a%m==0)
		bef=a/m;
	else
		bef=a/m+1;
	if(b%m==0)
	aft=b/m;
	else
		aft=b/m+1;
	if(((aft*m-b==0)&&(bef*m-a+1==m))||a==b)
	{
		cout<<1;
		return;
	}
	else 
	{
		if(aft*m-b!=0)
			Count+=1+(aft-bef-1>=1?1:0);
		else Count+=1;	
		if(bef*m-a+1!=m) Count++;
	}	
	cout<<Count;	
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//Input;
	//Output;
	solve();
	return 0;
}
