#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll counteven=0,pteven=0,ptodd=0;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			counteven+=1;
			pteven=i;
		}
		else{
			ptodd=i;
		}
	}
	if(counteven==1){
		cout<<pteven+1;
	}
	else cout<<ptodd+1;
	return 0;
}
