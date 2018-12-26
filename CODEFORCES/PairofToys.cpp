#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,k;
	cin>>n>>k;
	
	if(k-n>=n){
		cout<<"0";
		return 0;
	}
	if(n<k){
		ll s=k-n;
		cout<<(n-s+1)/2;
	}
	else if(n>=k){
		n=k-1;
		ll s=k-n;
		cout<<(n-s+1)/2;
	}
	return 0;
}
