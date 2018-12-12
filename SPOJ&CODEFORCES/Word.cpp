#include <bits/stdc++.h>
using namespace std;
#define ll long long

char up(char a)
{
	return toupper(a);
}

char low(char a)
{
	return tolower(a);
}

int main()
{
	string s;
	cin>>s;
	ll count=0;
	for(ll i=0;i<s.length();i++){
		if(islower(s[i])==0){
			count+=1;
		}
	}
	if(count<=s.length()/2){
		for(ll i=0;i<s.length();i++){
			cout<< low(s[i]);
		}
	}
	else {
		for(ll i=0;i<s.length();i++){
			cout<< up(s[i]);
		}
	}
	return 0;
}
