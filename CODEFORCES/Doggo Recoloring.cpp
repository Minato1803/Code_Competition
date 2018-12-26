	#include <bits/stdc++.h>
	using namespace std;
	#define ll long long

int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	if(n==1){
		cout<<"Yes";
		return 0;
	}
	for(ll i=0;i<s.length()-1;i++){
		ll a=s[i],count=1;
		for(ll j=i+1;j<s.length();j++){
			if(a==s[j]){
				count+=1;
				if(count>1){
					cout<<"Yes";
					return 0;
				}
			}
		}
	}
	cout<<"No";
	return 0;
}
