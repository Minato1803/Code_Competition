#include <bits/stdc++.h>
using namespace std;

#define  Input        	freopen("D:/input/input.txt", "r", stdin)
#define  Output			freopen("D:/input/input.txt", "w", stdout)
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


//link:
//====================================================


//declare
ll n;
vector < pair <ll,ll> > minions;
ll cenci,room,Count;
//============//

void solve()
{
	cin>>n;
	sort(all(minions));
	for(ll i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		minions.push_back(make_pair(a,b));

	}
	room=minions[0].second;Count=0;
	for(ll i=1;i<n;i++)
	{
		if(room>=minions[i].first)
		{
			Count++;
			if(room>=minions[i].second)
				room=minions[i].second;	
		}
		else
		{
			room=minions[i].second;
		}	
		
	}
	cout<<minions.size()-Count;	
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
	//Input;
	//Output;
	solve();
	return 0;
}
