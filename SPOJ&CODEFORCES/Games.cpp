#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll h[n],a[n];
	for(ll i=0;i<n;i++){
		cin>>h[i]>>a[i];
	}
	ll count=0;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){
			if(h[i]==a[j]){
				count+=1;
			}
		}
	}
	cout<<count;
}
