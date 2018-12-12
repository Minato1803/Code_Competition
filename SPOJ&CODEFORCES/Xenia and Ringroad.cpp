#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[m];
	for(ll i=0;i<m;i++)
	{
		cin>>a[i];
	}
	ll count=a[0]-1;
	for(ll i=1;i<m;i++)
	{
		if(a[i]>=a[i-1]){
			count+=(a[i]-a[i-1]);
		}
		else
		{
			count+=(n-a[i-1])+a[i];
		}
	}
		cout<<count;
		return 0;
	}
