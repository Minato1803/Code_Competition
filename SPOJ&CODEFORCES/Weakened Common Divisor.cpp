#include <bits/stdc++.h>
using namespace std;
#define ll long long

check(ll k,ll n,ll a[],ll b[])
{
	ll count=0;
	for(ll i=0;i<n;i++){
		if(a[i]%k==0||b[i]%k==0){
			count+=1;
		}
	}
	
	if(count==n){
		return true;
	}
	else return false;
}

int main()
{
	ll n;
	cin>>n;
	static ll a[150001],b[150001];
	ll min=2000000000;
	for(ll i=0;i<n;i++){
		cin>>a[i]>>b[i];
		if(min>a[i]){
			min=a[i];
		}
	}
	for(ll i=2;i<=min;i++){
		if(check(i,n,a,b)==1){
			cout<<i;
			return 0;
		}
	}
	cout<<"-1";
	return 0;
}
