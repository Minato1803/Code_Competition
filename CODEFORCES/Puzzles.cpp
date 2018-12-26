#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[m];
	for(ll i=0;i<m;i++){
		cin>>a[i];
	}
	for(ll i=0;i<m;i++){
		for(ll j=m-1;j>i;j--){
			if(a[j-1]>a[j]){
				swap(a[j-1],a[j]);
			}
		}
	}
	ll p=(a[n-1]-a[0]);
	for(ll i=1;i<=m-n;i++){
		if(p>(a[n-1+i]-a[i])){
			p=(a[n-1+i]-a[i]);
		}
	}
	cout<<p;
	return 0;
}
