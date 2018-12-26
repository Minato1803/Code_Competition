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

//====================================================================================================
ll n;

//-----------------------------

void Solves()
{
	cin>>n;
	vector <vector <ll> > cost(n);
	ll a;
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			cin>>a;
			cost[i].push_back(a);
		}
	}
	sort(cost.begin(), cost.end());
	for(ll i=0;i<cost.size();i++)
	{
		for(ll j=0;j<cost[i].size();j++)
		{
			cout<<cost[i][j]<<" ";
		}
		cout<<endl;
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
