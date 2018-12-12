#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)

//====================================================================================================

vector < pair<ll,ll> > friends;
vector <ll> Count;
ll n,m,u,v;
void Solves()
{
	cin>>n>>m;
	for(ll i=0;i<m;i++)
	{	
			cin>>u>>v;
			friends.push_back(make_pair(u,v));
			friends.push_back(make_pair(v,u));
	}
	sort(friends.begin(),friends.end());
	ll j=1;
	for(ll i=0;i<friends.size();i++)
	{
//		cout<<i<<endl;
		if(friends[i].first==j)
			Count.push_back(friends[i].second);
		else
		{
			cout<<Count.size()<<" ";
			for(ll k=0;k<Count.size();k++)
			{
				cout<<Count[k]<<" ";
			}
			cout<<endl;
			Count.clear();
			j++;
			i--;
		}		
	}
	cout<<Count.size()<<" ";
	for(ll k=0;k<Count.size();k++)
		cout<<Count[k]<<" ";
	cout<<endl;
	if(j<n)
	{
		for(ll i=j+1;i<=n;i++)
			cout<<0<<endl;
	}
}

int main()
{
    buff;
    Input;
//    Output;
    Solves();
    return 0;
}
