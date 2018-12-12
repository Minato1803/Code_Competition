#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ss(string s, string t)
{
	if(s.length()!=t.length()){
		return false;
	}
	for(ll i=0;i<s.length();i++){
		if(s[i]!=t[i]){
			return false;
		}
	}
	return true;
}

int main()
{
	ll n,m;
	cin>>n>>m;
	string s,t;
	cin>>s>>t;
	if(n<=m){
		if(s.find("*")!=-1){
			ll pt=s.find("*");
			s.erase(s.find("*"),1);
			t.erase(pt,m-(n-1));
			if(ss(s,t)==1){
				cout<<"YES";
				return 0;
			}
			else{
				cout<<"NO";
				return 0;
			}
		}
		else{
			if(ss(s,t)==1){
				cout<<"YES";
				return 0;
			}
			else{
				cout<<"NO";
				return 0;
			}
		} 
	}
	if(n>m){
		if(s.find("*")!=-1){
			ll pt=s.find("*");
			s.erase(s.find("*"),1);
			if(ss(s,t)==1){
				cout<<"YES";
				return 0;
			}
			else{
				cout<<"NO";
				return 0;
			}
		}
		else{
			if(ss(s,t)==1){
				cout<<"YES";
				return 0;
			}
			else{
				cout<<"NO";
				return 0;
			}
		} 
	}
	return 0;
}
