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
ll p,r,l;
ll a[1007][1007] = {0};
ll tham[1007], truoc[1007];
//-----------------------------

void dfs(ll u)
{
	tham[u] = 1;
	for(ll v = 2; v<= r+3;v++)
	{
		if(a[u][v] == 1 && tham[v] == 0)
		{
			truoc[v] = u;
			dfs(v);
		}
	} 
}
ll check()
{
	ll Count = 0;
	if(truoc[2] == 0)
	{
		return Count;
	}
	else
	{
		ll i = 2;
		Count = 1;
		a[i][truoc[i]] = 0;
		a[truoc[i]][i] = 0;
		while(truoc[i] != 1)
		{
			Count++;
			i = truoc[i];
			a[i][truoc[i]] = 0;
			a[truoc[i]][i] = 0;
//			cout<<truoc[i]<<" "<<i;
		}
//		cout<<endl;
		return Count;
	}
}

void Solves()
{
	cin>>p>>r>>l;
	ll CountTime = 0,CountP = 0;
	ll e1,e2;
	for(ll i=0;i<l;i++)
	{
		cin>>e1>>e2;
		e1+=3;
		e2+=3;
		a[e1][e2] = 1;
		a[e2][e1] = 1;
	}
			
	for(ll it = 0;it<p;it++)
	{
		for(ll k=0;k<=r+3;k++)
		{
			tham[k] = 0;
			truoc[k] = 0;
		}
//		cout<<it<<endl;
//		for(ll i = 0;i<=r+2;i++)
//		{
//			for(ll j=0;j<=r+2;j++)
//			cout<<a[i][j]<<" ";
//		cout<<endl;
//		}
		dfs(1);
		if(check() == 0)
		{
			break;
		}
		else
		{
			CountP++;
			CountTime+= check();
		}
	}
//	cout<<CountTime<<" "<<CountP<<endl;
	if(CountP == p)
	{
		cout<<CountTime<<endl;
	}
	else
	{
		cout<<p-CountP<<" "<<"people left behind"<<endl;
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
