#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll count=1,max=1;
	for(ll i=1;i<n;i++){
		if(a[i]>=a[i-1]){
			count+=1;
			if(max<count){
				max=count;
			}
		}
		else {
			if(max<count){
				max=count;
			}
			count=1;
		}
	}
	cout<<max;
	return 0; 
}
