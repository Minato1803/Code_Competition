#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/input.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
ll n;
multimap <ll,ll> CountPrime;
bool Prime[10000000]={0};
//-----------------------------

void check()
{
	for(ll i=2;i<=sqrt(1e7);i++)
	{
		if(Prime[i]==0)
			for(j=i;j<=1e7;j+=i)
			{
				CountPrime.emplace(i,j);
				Prime[i]=1;
			}
	}
	for(ll i=2;i<=1e7;i++)
	{
		if(Prime[i]==0)
			CountPrime.emplace(i,i);
	}
}

void Solves()
{
	cin>>n;
	ll a;
	for(ll i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(CountPrime.second)
	}
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
