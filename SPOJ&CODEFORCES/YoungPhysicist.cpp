#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll a=0,b=0,c=0;
	for(ll i=0;i<n;i++){
		ll x,y,z;
		cin>>x>>y>>z;
		a+=x;
		b+=y;
		c+=z;
	}
	if(a==0&&b==0&&c==0){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}
