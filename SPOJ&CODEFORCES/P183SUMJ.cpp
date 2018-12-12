#include <bits/stdc++.h>
using namespace std;
#define ll long long

void checkpass(ll a[], ll b[], ll n, ll m)
{
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			if(a[i]==b[j]){
				cout<<a[i]<<" ";
			}
		}
	}
}

int main()
{
	ll n,m;
	cin>>n>>m;
	ll *a=new ll[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll *b=new ll[m];
	for(ll i=0;i<m;i++){
		cin>>b[i];
	}
	checkpass(a,b,n,m);
	return 0;
	
}
