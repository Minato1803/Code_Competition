#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll d,a[4];
	for(ll i=0;i<4;i++){
		cin>>a[i];
	}
	cin>>d;
	ll count=0;
	for(ll i=1;i<=d;i++){
		for(ll j=0;j<4;j++){
			if(i%a[j]==0){
				count+=1;
				break;
			}
		}
	}
	cout<<count;
	return 0;
		
}
