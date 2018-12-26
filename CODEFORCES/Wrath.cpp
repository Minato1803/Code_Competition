#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n; 
	cin>>n;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll tmp= n, count= 0;
	for(ll i=n-1;i>=0;i--)
	{
		if(i < tmp)
			count+=1;
		if(tmp>i-a[i])
			tmp=i-a[i];
	}
	cout<<count;
	return 0;
}
