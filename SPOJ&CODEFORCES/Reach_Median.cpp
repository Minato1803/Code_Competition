#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,s;
	cin>>n>>s;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll count=0;
	if(s==a[n/2]){
		cout<<count;
	}
	else
	{
		 if(s>a[n/2])
		{
			for(ll i=n/2;i<n;i++)
			{
				if(a[i]==s)
				{
					break;
				}
				if(s<=a[i])
				{
					break;
				}
				count+=(s-a[i]);
			}
			cout<<count;
		}
		else 
		{
			for(ll i=n/2;i>=0;i--)
			{
				if(a[i]==s){
					break;
				}
				if(s>=a[i]){
					break;
				}
				count+=(a[i]-s);
			}
			cout<<count;
		}
	}
	return 0;
}
