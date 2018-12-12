#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	string s,t;
	cin>>s>>t;
	for(ll i=0;i<s.length();i++){
		if(s[i]!=t[i]){
			cout<<"1";
		}
		else cout<<"0";
	}
	return 0;
}
