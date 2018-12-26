#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll min=100;
	ll max=0;
	ll ptmax=0, ptmin=0;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		if(max<a[i]){
			max=a[i];
			ptmax=i;
		}
		if(a[i]<=min){
			min=a[i];
			ptmin=i;
		}
	}
	if(max==min||(ptmax==0&&ptmin==n-1)){
		cout<<"0";
		return 0;
	}
	if(ptmax>ptmin){
		cout<<(ptmax-1)+(n-1-ptmin);
		return 0;
	}
	if(ptmax<ptmin){
		cout<<ptmax+(n-1-ptmin);
	}
	return 0;
}
