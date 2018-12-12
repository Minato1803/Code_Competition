#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n, k;
	cin>>n>>k;
	ll a[n];
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	if(a[k]==0){
		for(ll i=1;i<=k;i++){
			if(a[i]==0){
				cout<<i-1;
				return 0;
			}
		}
	}
	for(ll i=k+1;i<=n;i++){
		if(a[i]<a[k]){
			cout<<i-1;
			return 0;
		}
	}
	cout<<n;
	return 0;	
}
