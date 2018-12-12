#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll sum=0;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	cout<<sum;
	return 0;
}
