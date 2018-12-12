#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	string s,t;
	cin>>s>>t;
	for(ll i=0;i<s.length();i++){
	    if(s[i]!=t[(s.length()-1)-i]){
	        cout<<"NO";
	        return 0;
	    }
	}
	cout<<"YES";
	return 0;
}
