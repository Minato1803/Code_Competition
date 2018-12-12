#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll x,ll n)
{
	return (n==0)? x:gcd(n, x%n); 
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll a,b,n;
	cin>>a>>b>>n;
	ll count=0;
	while(n!=0)
	{
		n-=gcd(a,n);
		count+=1;
		if(n>0)
		{
		n-=gcd(b,n);
		count+=1;
		}
	}
//	cout<<count<<endl;
	if(count%2==0) cout<<1;
	else cout<<0;
	return 0;
}
