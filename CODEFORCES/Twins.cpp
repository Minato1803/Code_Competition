#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll Sn=0,S=0;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		Sn+=a[i];
	}
	for(ll i=0;i<n;i++){
		for(ll j=n-1;j>i;j--){
			if(a[j-1]<a[j]){
				swap(a[j-1],a[j]);
			}
			
		}
	}
	for(ll i=0;i<n;i++){
		S+=a[i];
		if(S>(Sn-S)){
			cout<<i+1;
			return 0;
		}
	}
	return 0;
}
