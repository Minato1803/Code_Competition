#include <bits/stdc++.h>
using namespace std;
#define ll long long

void DFS(ll u,ll free[], ll a[][1000],ll n)
{
	free[u]=0;
	for(ll v=1;v<=n;v++)
		if(a[u][v]==1&&free[v]==1)
			DFS(v,free,a,n);
}

int main()
{
	ll free[10000];
	ll a[1000][1000];	
	ll t;
	cin>>t;
	ll n,m,x,y,u,v,s;
	for(ll i=1;i<=n;i++){
        for (ll j=1;j<=n;j++){
        	a[i][j]=0;
		}
	}
	for(ll i=1;i<=m;i++){
		cin>>u>>v;	
		a[u][v]=1;
		a[v][u]=1;
	}
	for(int i=1;i<=n;i++){
		free[i]=1;
		DFS(s,free,a,n);
		return 0;
	}
}
