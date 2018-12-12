#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double



int main()
{
	ll n;
	cin>>n;
	ll a[n][6];
	ll pos=0;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<6;j++){
			cin>>a[i][j]; 
		}
	}
	ll b[100]={0};
	for(ll i=0;i<n;i++){
		for(ll j=0;j<6;j++){
			pos=a[i][j];
			b[pos]+=1;
			for(ll k=0;k<n;k++){
				if(k==i) continue;
				for(ll l=0;l<6;l++){
					b[pos*10+a[k][l]]+=1;
				}
			} 
		}
	}
//	for(ll i=1;i<100;i++)
//	cout<<b[i]<<" ";
//	cout<<endl;
	if(b[0]==0){
		for(ll i=1;i<=9;i++){
			if(b[i]==0){
				cout<<i-1;
				return 0;
			}
		}
		cout<<9;
		return 0;
	}
	else {
	for(ll i=1;i<100;i++){
			if(b[i]==0){
				cout<<i-1;
				return 0;
			}
	}
	}
	return 0;
}
