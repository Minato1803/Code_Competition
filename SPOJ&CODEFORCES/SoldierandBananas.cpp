#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll k,n,w;
	cin>>k>>n>>w;
	ll S=0;
	for(ll j=1;j<=w;j++){
		S+=j*k;		
	}
	if(S>=n){
	cout<<S-n;
	}
	else cout<<"0";
	return 0;
}
