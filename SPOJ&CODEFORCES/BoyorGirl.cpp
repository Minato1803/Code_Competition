#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	string s;
	cin>>s;
	for(ll i=0;i<s.length();i++){
		for(ll j=i+1;j<s.length();j++){
			if(s[i]==s[j]){
				s.erase(j,1);
				j-=1;
			}
		}
	}
	if(s.length()%2==0){
		cout<<"CHAT WITH HER!";
	}
	else cout<<"IGNORE HIM!";
	return 0;
}
