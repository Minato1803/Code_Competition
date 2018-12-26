#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll p,q;
	ll count=0;
	for(ll i=0;i<n;i++){
		cin>>p>>q;
		if((q-p)>=2){
			count+=1;
		}
	}
	cout<<count;
	return 0;
}
