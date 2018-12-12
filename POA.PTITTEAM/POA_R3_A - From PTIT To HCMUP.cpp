#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[105][105], Free[105];
ll n,m,u,v,Count=0;
string s[105][105],ss,result[305]="";
ll bef[105];
void dfs(ll b,ll n)
{
	Free[b]=1;
	for(ll i=1;i<=n;i++)
	{
		if(a[b][i]==1 && Free[i]==0)
		{	
			bef[i]=b;
			dfs(i,n);
		}	
	}
}

void check(void)
{
	ll i=n;
	if(bef[n]!=0)
	{
		while(i!=1&&bef[i]!=0)
		{
			result[Count].insert(0,s[bef[i]][i]);
			Count++;
			i=bef[i];
		}
		cout<<Count<<endl;
		for(ll i=Count-1;i>=0;i--)
		{
			cout<<result[i]<<endl;
		}
	}
	
}

int main()
{
	cin>>n>>m;
	for(ll i=0;i<=n;i++)
	{
		Free[i]=0;
		bef[i]=0;
		for(ll j=0;j<=n;j++)
		{
			a[i][j]=0;
			a[j][i]=0;
		}
	}
	for(ll i=0;i<m;i++)
	{
		cin>>ss;
		cin>>u>>v;
		a[u][v]=1;
		a[v][u]=1;
		s[u][v].insert(0,ss);
		s[v][u].insert(0,ss);
	}
	dfs(1,n);
	check();
}
