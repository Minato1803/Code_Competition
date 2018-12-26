#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[m];
	string s;
	for(ll i=1;i<=m;i++){
		a[i]=0;
	}
	ll l[n],r[n],dem=0;
	for(ll i=1;i<=n;i++){
			cin>>l[i]>>r[i];
		for(ll j=l[i];j<=r[i];j++){
			a[j]=1;
		}
			
	}
	for(ll i=1;i<=m;i++){
				if(a[i]==0){
					dem+=1;
				}
	}
	cout<<dem<<endl;
	if(dem==0){return 0;}
		else{
			for(ll i=1;i<=m;i++){
				if(a[i]==0){
					cout<<i<<" ";
				}
			}
		}
	return 0;	
}
