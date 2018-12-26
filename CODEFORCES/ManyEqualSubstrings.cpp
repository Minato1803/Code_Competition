#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	if(s[0]==s[s.length()-1]&&s.length()>1){
		string a = s.substr(0,s.length()-1);
		for( ll i=1;i<k;i++){
			s.insert(0,a);
		}
	}
	else {
		string a = s.substr(0,s.length());
		for( ll i=1;i<k;i++){
			s.insert(0,a);
		}
	}
	cout<<s;
	return 0;
}
