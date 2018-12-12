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
ll ktt[max]={0};
//============//

ll kt(ll L, ll R)
{
	ll count=0;
//	if(r&1!=1) r--;
	for(ll i=3;i<=R;i+=2)
	{
		if(ktt[i]==1)continue;
		for(ll j=i*2;j<=R;j+=i)
		{
			ktt[j]=1;
		}	
		 if((i<l&&i*i>r)) continue;
		 else count+=i;
	}
	cout<<count<<endl;
	return count;

}

void solve()
{
	cin>>q;
	
	for(ll i=1;i<=q;i++)
	{
		cin>>l>>r;
		ll s=0;
		if((l&1==1)&&(r&1==1))
			s+=2*((r-l)/2);
		else 
			s+=2*((r-l)/2+1);
//		if((l&1)!=1) l+=1;
		cout<<s<<endl;
		cout<<s+kt(l,r)<<endl;	
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//Input;
	//Output;
	solve();
	return 0;
}
