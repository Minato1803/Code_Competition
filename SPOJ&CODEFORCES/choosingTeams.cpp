#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,k;
	cin>>n>>k;
	ll a[n];
	ll mem = 0;
	for(ll i=0 ;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<=5-k)
		{
			mem+=1;
		}
	}
	cout<< mem/3;
	return 0;
}
