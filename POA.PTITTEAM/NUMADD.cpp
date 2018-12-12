#include <bits/stdc++.h>
using namespace std;
#define ll long long

void checknum(ll max, ll n , ll check)
{
		if(max%2==0&&check==0){
			if((max/2-n)%2==0){
				cout<<"0";
			}
			else cout<<"1";
		}
	if(check==1){
		if((max-n)%2==0){cout<<"0";
			}
			else cout<<"1";
	}
}
int main()
{
	long long t,n;
	cin>>t;
	long long  a[n];
	for(ll i=1;i<=t;i++){
		ll check=0;
		cin>>n;
		cin>>a[0];
		ll max=a[0];
//		ll min=a[0];
		for(ll j=1;j<n;j++){
			cin>>a[i];
			if(a[i]%2!=0){
				check=true;
			}
			if(max<a[i]){
				max=a[i];
			}
//			if(min>a[i]){
//				min=a[i];
//			}
		}
		checknum(max,n,check);	
	}
	return 0;
}
