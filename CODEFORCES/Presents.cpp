#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll a[n],s[n];
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		s[a[i]]=i;
	}
	for(ll i=1;i<=n;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}
