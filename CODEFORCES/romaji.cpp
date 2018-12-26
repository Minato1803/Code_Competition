#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll findout(string a, string s,ll i)
{	
	for(ll j=0;j<a.length();j++){
		if(s[i-1]==a[j]){
			if(s[i-2]!='n'&&s[i-1]!=s[s.length()-1]){return 0;}
		}
		if(s[i]==a[j]){return 1;}
	}
	if(s[i-1]=='n'){return 1;}
	return 0;
	
}

int main()
{
	string a="ueoai";
	string s;
	cin>>s;
	for(ll i=0;i<a.length();i++){
		if(s[s.length()-1]==a[i]||s[s.length()-1]=='n'){
			goto loop;	
		}
	}
	cout<<"NO"; return 0;
	loop: for(ll i=1;i<s.length();i+=2){
			if(findout(a,s,i)==0){cout<<"NO"; return 0;}
			}
		cout<<"YES";
	return 0;	
}
