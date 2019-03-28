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
#define MAX				2000000
//====================================================================================================
ll n;
map<long double,ll> Count;
map<long double,ll>::iterator it;
ll extra = 0;
ll a[MAX+5];
ll b[MAX+5];
//-----------------------------

void Solves()
{
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(ll i=0;i<n;i++)
	{
		cin>>b[i];
		if(a[i]!=0)
		{
			Count[(long double) -b[i]/a[i]]++;		
		}
		else if(b[i]==0)
		{
			extra++;
		}
	}
	ll maxx=0;
	for(it = Count.begin();it!=Count.end();it++)
	{
		cout<<fix_set(17)<<it->first<<" "<<it->second<<endl;
		if(it->second > maxx)
		{
			maxx=it->second;
		}
	}
	cout<<maxx+extra;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
