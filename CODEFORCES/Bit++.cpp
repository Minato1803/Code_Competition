#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
	ll n;
	cin>>n;
	ll x=0;
	for(ll i=1;i<=n;i++){
		string s;
		cin>>s;
		if(s.find("++")!=-1){
			x+=1;
		}
		if(s.find("--")!=-1){
			x-=1;
		}
	}
	cout<<x;
	return 0;
}
