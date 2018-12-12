#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	string s;
	cin>>s;
	ll pt=0,count=0;
	for(ll i=s.find("h");i<s.length();i++){
		if(s[i]=='e'){
			pt=i;count+=1;
			if(pt==s.length()-1){
				cout<<"NO";
				return 0;
			}
			break;
		}
	}
	for(ll i=pt+1;i<s.length();i++){
		if(s[i]=='l'){
			pt=i;count+=1;
			if(pt==s.length()-1){
				cout<<"NO";
				return 0;
			}
			break;
		}
	}
	for(ll i=pt+1;i<s.length();i++){
		if(s[i]=='l'){
			pt=i;count+=1;
			if(pt==s.length()-1){
				cout<<"NO";
				return 0;
			}
			break;
		}
	}
	if(count!=3){
		cout<<"NO";
		return 0;
	}
	for(ll i=pt+1;i<s.length();i++){
		if(s[i]=='o'){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
