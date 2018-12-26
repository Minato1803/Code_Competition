#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int a)
{
      return (a & (a - 1)) == 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
		ll n;
	cin>>n;
	ll a[n];
	ll re[5]= {0};
	ll count = 0;
	map <ll,ll> even;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
			if check(a==1);
				even[a[i]]++;		
	}
	
	for(ll i=1;i<=k;i++)
	{
		if(k-i<=i) break;
		if(re[k-i]>=re[i])
			re[i] = 0;
		re[k-i] = 0;
	}
	
	if(re[0]>0)
		re[0] = 1;
		
	if(k%2==0)
	{
		if(re[k/2]>0)
			re[k/2] = 1;
	}
	
	for(ll i=0;i<100;i++){
		count+=re[i];
	}
	cout<<count;	
	return 0;
}
