	#include <bits/stdc++.h>
	using namespace std;
	#define ll long long

int main()
{
	string s;
	getline(cin,s);
	ll a[126]= {0};
	for(ll i=0;i<=s.length();i++){
		a[s[i]]+=1;
	}
	ll count=0;
	for(ll i=97;i<=122;i++){
		if(a[i]>=1){
			count+=1;
		}
	}
	cout<<count;
	return 0;
}
