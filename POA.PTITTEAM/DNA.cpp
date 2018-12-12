#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
	string s;
	cin>>s;
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++){
		string a;
		cin>>a;
		if(s.length()==a.length()){
			ll count=0;
			for(ll j=0;j<s.length();j++){
				if(s[j]!=a[j]){
					count+=1;
				}
			}
			if(count<=2){
				cout<<i<<" ";
			}
		}
	}
	return 0;	
}
