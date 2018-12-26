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
#define max 1000005


typedef double db;
typedef long long ll;
ll const MAX = 1e18;
ll const Base = 1;

inline ll fpow(ll a,ll x) {if(x==0)return 1;	if(x&1) {return a*fpow(a,x-1)%Base;} else{ll t=fpow(a,x/2);return t*t%Base;}}  //tinh (a^x) % Base
inline ll diMod(ll A, ll B){(A * fpow(B, Base-2)) % Base;};		//tinh (A/B) % Base

//link:
//====================================================


//declare
ll q;
ll l,r;
ll Prime[1000005]={0};
ll ans[1000005];
//============//

void IsPrime()
{
	for(ll i=2;i*i<=1000000;i++)
	{
		if(Prime[i]==0)
		{
			for(ll j=i*i;j<=1000000;j+=i)
				if(Prime[j]==0)
					Prime[j]=i;
		}
	}
	for(ll i=2;i<=1000000;i++)
		if(Prime[i]==0)
			Prime[i]=i;
}

void solve()
{
	IsPrime();
	ll sum=0;
	ans[1]=0;
	for(ll i=2;i<=1000000;i++)
	
		ans[i]=ans[i-1]+Prime[i];
	scanf("%lld",&q);
	for(ll i=0;i<q;i++)
	{
		scanf("%lld%lld",&l,&r);
//		cout<<ans[r]<<" "<<ans[l-1]<<endl;
		printf("%lld \n",ans[r]-ans[l-1]);
	}
	
}

int main()
{
//	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	Input;
//	Output;
	solve();
	return 0;
}
