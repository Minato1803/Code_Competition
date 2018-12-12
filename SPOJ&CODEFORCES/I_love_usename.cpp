#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ios_base::sync_with_stdio(false);
//	cin.tie(0);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll count=0;
	for(ll pos=1;pos<n;pos++)
	{
		ll countmax=0, countmin=0;
		for(ll i=0;i<pos;i++)
		{
			if(a[pos]>a[i]) countmax+=1;
			if(a[pos]<a[i]) countmin+=1;
		}
		if(countmin==pos||countmax==pos) count+=1;
	}
	cout<<count;
	return 0;
}
