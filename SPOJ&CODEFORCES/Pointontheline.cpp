#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,d;
	cin>>n>>d;
	ll a[n+5];
	if(n<=1)
	{
		cout<<0;
		return 0;
	}
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	sort(a,a+n);
	ll result=105;
	for(ll i=0;i<n-1;i++)
	{
		ll count=0;
		for(ll j=i+1;j<n;j++)
		{
			if(a[j]-a[i]>d)
			{
				count=n-j;
				break;
			}
		}
		if(result>count+i)
		{
			result=count+i;
		}
		
	}	
	cout<<result;
	return 0;
}
