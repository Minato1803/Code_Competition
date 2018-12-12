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
ll n,q,a[4005];
//============//

db mean(ll l,ll r)
{
	db sum=0;
	db dig = r-l+1;
	for(ll i=l;i<=r;i++)
	{
		sum+= (db) a[i]/dig;
	}
	return sum;
}

db med(ll l,ll r)
{
	vector <ll> sorts;
	for(ll i=l;i<=r;i++)
	{
		sorts.push_back(a[i]);
	}
	sort(all(sorts));
	ll t= sorts.size();
	 if (t % 2 != 0) 
       return (db) sorts[t/2]; 
      
    return (db) (sorts[(t-1)/2] + sorts[t/2])/2.0;
}

db var(ll l, ll r)
{
	db vars=0;
	ll t=r-l+1;
	for(ll i=l;i<=r;i++)
	{
		vars+= (db) ((a[i]-mean(l,r))*(a[i]-mean(l,r)))/t;
	}
	return vars;
}

db sd(ll l, ll r)
{
	return sqrt(var(l,r));
}

void solve()
{
	cin>>n>>q;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(ll i=0;i<q;i++)
	{
		ll l,r;
		cin>>l>>r;
		cout<<fix_set(6)<<mean(l,r)<<" "<<med(l,r)<<" "<<var(l,r)<<" "<<sd(l,r)<<endl;
		
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	Input;
//	Output;
	solve();
	return 0;
}
