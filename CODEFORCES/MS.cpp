#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll a[10];
	for(ll i=1;i<=9;i++){
		cin>>a[i];
	}
	for(ll i=1;i<=9;i++){
		for(ll j=9;j>i;j--){
			if(a[j]<a[j-1]){
				swap(a[j],a[j-1]);
			}
		}
	}
	ll s=0;
	for(ll i=1;i<=9;i++){
//		cout<<a[i];
		if(a[i]!=i){
			s+=abs(a[i]-i);
		}
	}
	cout<<s;
	return 0;
}
