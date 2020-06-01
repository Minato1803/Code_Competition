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
	ll re[105]= {0};
	ll count = 0;
	map <ll,ll> del;
	
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		del[a[i]]++;
		if(del[a[i]]>1) continue;
		re[a[i]%k]++;
	}
	
	for(ll i=1;i<=k;i++)
	{
		if(k-i<=i) break;
		if(re[k-i]>=re[i])
			re[i] = 0;
		else	
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
