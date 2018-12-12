#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll count=0;
	for(ll i=s.find("A");i<s.length();i++){
		if(s[i]=='A'){
			count+=1;
		}
	}
	if(count>(n-count)){
		cout<<"Anton";
	}
	else if(count==(n-count)){
		cout<<"Friendship";
	}
	else cout<<"Danik";
	return 0;
}
