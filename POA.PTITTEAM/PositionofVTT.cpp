#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,p,k;
	cin>>n>>p>>k;
	ll Sn,An;
	Sn = p-k-1;
	An= p+k+1;
	if(Sn>0&&Sn<=n){
		if(An>0&&An<=n){
			if(Sn>An){
				cout<<Sn;
				return 0;
			}
			else{
				cout<<An;
				return 0;}
		}
		else {
		cout<<Sn;
		return 0;}
	}
	if(An>0&&An<=n){
		if(Sn>0&&Sn<=n){
			if(Sn>An){
				cout<<Sn;
				return 0;
			}
			else{
				cout<<An;
				return 0;}
		}
		else {
		cout<<An;
		return 0;}
	}
	cout<<"-1";
	return 0;
	
}
