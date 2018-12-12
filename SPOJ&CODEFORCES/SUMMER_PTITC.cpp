#include <bits/stdc++.h>
using namespace std;
#define ll long long

void out(string a[],ll n)
{
	for(ll i=0;i<n;i++){
		if(a[i].length()>10){
				cout<<a[i].substr(0,1)<<a[i].length()-2<<a[i].substr(a[i].length()-1,1)<<endl;
		}
			else cout<<a[i]<<endl;
	}
}
int main()
{
	ll n;
	cin>>n;
	string a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	out(a,n);
	return 0;
}
