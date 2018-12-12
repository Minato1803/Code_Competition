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
	ll mark=a[0];
	ll count=1;
	for(ll i=0;i<n;i++){
		if(mark!=a[i]){
			mark=a[i];
			count+=1;
		}
	}
	cout<<count;
	return 0;
}
