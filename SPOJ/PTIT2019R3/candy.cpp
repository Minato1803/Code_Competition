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
#define modnum			1000000007
//====================================================================================================
	ll n,m;
	vector <ll> point;
	ll x,k;
//-----------------------------

void Solves()
{
	cin>>n>>m;
	ll tmp=0, PointBag=1;
	
	for(ll i=0;i<n;i++)
	{
		cin>>k>>x;
		switch(k)
		{
			case 1:
			{
				tmp= ((tmp%modnum)+(x%modnum))%modnum;
				break;
			}	
			case 2:
			{
				tmp= ((tmp%modnum)*(x%modnum))%modnum;
				point.pb(x%modnum);
			}	
		}
	}
	ll result =1;
	for(ll i=0;i<point.size();i++)
	{
		result = (result%modnum)*(point[i]%modnum);
	}
	result %=modnum;
	for(ll i=0;i<=m;i++)
	{
		PointBag = (((PointBag%modnum)*result%modnum)%modnum + tmp)%modnum;
		 
	}
	cout<<PointBag<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
