#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 10005

queue <ll> q;
ll fr[max] = {1},u,v,n,m;
ll a[max][max] = {0};

ll BFS(ll i)
{
	q.push(i);
	fr[i] = 0;
	ll count=0;
	while(q.empty()!=0)
	{
		ll u = q.front();
		q.pop();
		count+=1;
		for(ll v=1;v<=n;v++)
		{	
			if(fr[v]==1&&a[u][v]==1)
			{
				fr[v]=0;
				q.push(v);
			}
		}
	}
	return count;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	ll cost[n+5];
	for(ll i=1;i<=n;i++)
	{
		cin>>cost[i];
	}
	ll u,v;
	for(ll i=0;i<m;i++)
	{
		cin>>u>>v;
		a[u][v]= 1;
		a[v][u]= 1;
	}
	ll ans = 0;
	for(ll i=1;i<=n;i++)
	{
		cout<<BFS(i)<<endl;
	}
	
	return 0;
}
