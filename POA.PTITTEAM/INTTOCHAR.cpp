#include <bits/stdc++.h>
using namespace std;
#define ll long long

char trans(ll s)
{
	return s;
}

int main()
{
	ll n;
	cin>>n;
	ll s;
	for(ll i=0;i<n;i++){
		cin>>s;
		cout<<trans(s);
	}
	return 0;	
}
