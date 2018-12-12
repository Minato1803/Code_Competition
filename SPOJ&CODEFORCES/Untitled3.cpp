#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,m;
	cin>>n>>m;
	if(n>m){
		cout<<"0"; return 0;
	}
	ll a[m];
	for(ll i=0;i<m;i++){
		cin>>a[i];
	}
	ll pack=a[0],count=0;
	for(ll i=0;i<m;i++){
		if(pack==a[i]){
			count+=1;
		}
	}
	b[0]= count;
}
