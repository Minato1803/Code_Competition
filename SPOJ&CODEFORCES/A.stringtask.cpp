#include <bits/stdc++.h>
using namespace std;
#define ll long long

void check(char c,string a){
	char s = toupper(c);
	for(ll i=0;i<a.length();i++){
		if(s==a[i]){
			return;
		}
	}
	c= tolower(s);
	cout<<"."<<c;
	return;
}

int main ()
{
	string s;
	cin>>s;
	string a("AOYEUI");
	for(ll i=0;i<s.length();i++){
		check(s[i],a);
	}
	return 0;
}
