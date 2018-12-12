#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool Tprimes(ll a)
{
	ll count = 0;
	if(a<=3) return 0;
	for( ll i=2;i<=sqrt(a)+1;i++)
	{
		if(a%i==0)
			count+=1;
		if(count>=2) return 0;	
	}
//	for( ll i=sqrt(a)+1;i<a;i++)
//	{
//		if(a%i==0)
//			count+=1;
//		if(count>=2) return 0;	
//	}
	if(count==1) 
		return 1;
	else return 0; 	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		ll a;
		cin>>a;
		if(Tprimes(a)==1)
			cout<<"YES\n";
		else cout<<"NO\n";	
	}
	return 0;
}
