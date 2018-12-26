//https://open.kattis.com/contests/rckvjo/problems/hideandseek
#include <bits/stdc++.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixed<<setprecision(x)

//====================================================================================================
ll x,y;
ll a[10000][10000];



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll x,y;
	cin>>y>>x;
	ll a[x+5][y+5];
	for(ll i=0;i<=x+1;i++)
		for(ll j=0;j<=y+1;j++)
		{
			if(i==0||j==0||i==x+1||j==y+1)
			{
				a[i][j]=1000;
				continue;
			}
			else cin>>a[i][j];
		}	
		ll count=0;
	for(ll i=0;i<=x+1;i++)
	{
		for(ll j=0;j<=y+1;j++)
		{
			if(check(i,j)==1)
			{
				count+=1;
			}
		}
	}
	cout<<count;
	return 0;
}
