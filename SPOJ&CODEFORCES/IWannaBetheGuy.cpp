#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll p;
	cin>>p;
	ll a[n];
	for(ll i=1;i<=n;i++){
		a[i]=0;
	}
	ll pt;
	for(ll  i=0;i<p;i++){
		cin>>pt;
		a[pt]+=1;
	}
	ll q;
	cin>>q;
	for(ll  i=0;i<q;i++){
		cin>>pt;
		a[pt]+=1;
	}
	for(ll  i=1;i<=n;i++){
		if(a[i]==0){
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";
	return 0;
}
