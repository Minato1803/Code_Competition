#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=0;i<n;i++){
		for(ll j=n-1;j>i;j--){
			if(a[j-1]>a[j]){
				swap(a[j-1],a[j]);
			}
		}
	}
	for(ll i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
