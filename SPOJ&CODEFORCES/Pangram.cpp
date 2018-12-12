#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll a[130]= {0};
	for(ll i=0;i<n;i++){
		a[tolower(s[i])]+=1;
	}
	for(ll i=97;i<=122;i++){
		if(a[i]==0){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
