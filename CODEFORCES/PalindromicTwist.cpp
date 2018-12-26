#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s)
{	ll count=0;
	for(ll i=0;i<s.length()/2;i++){
		if(abs(s[i]-s[s.length()-1-i])==2||s[i]==s[s.length()-1-i]){
			count+=1;
		}
	}
	if(count==s.length()/2)
	return true;
	else return false;
}

int main()
{
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++){
		ll t;
		cin>>t;
		string s;
		cin>>s;
		if(check(s)==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

