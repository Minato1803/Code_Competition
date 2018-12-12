#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll a[4];
	ll n=4;
	for(ll i=0;i<4;i++){
		cin>>a[i];
	}
	for(ll i=0;i<4;i++){
		ll count=0;
		ll s=a[i];
		for(ll j=i+1;j<4;j++){
			if(s==a[j]){
				count+=1;
			}
		}

		if(count==0){
			n-=1;	
		}
	}
	cout<<n;
	return 0;
}
