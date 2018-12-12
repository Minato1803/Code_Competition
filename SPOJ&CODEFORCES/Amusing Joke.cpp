#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	string s,t,d;
	cin>>s>>t>>d;
	ll a[95]={0};
	if(s.length()+t.length()>d.length()){
		cout<<"NO";
		return 0;
	}
	s.insert(s.length(),t);
	for(ll i=0;i<s.length();i++){
		a[s[i]]+=1;
	}
	for(ll i=0;i<d.length();i++){
		a[d[i]]-=1;
	}
	for(ll i=65;i<=90;i++){
		if(a[i]!=0){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
