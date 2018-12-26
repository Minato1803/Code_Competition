#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main()
{
	ll s,n;
	cin>>s>>n;
	ll a[10001],b[10001];
	for(ll i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(ll i=0;i<n;i++){
		for(ll j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				swap(a[j],a[j-1]);
				swap(b[j],b[j-1]);
			}
		}
	}
//	for(ll i=0;i<n;i++){
//		cout<<a[i]<<endl;
//	}
	for(ll i=0;i<n;i++){
		if(s>a[i]){
			s+=b[i];
		}
		else {
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
	
}
