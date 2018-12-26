#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
	ll n;
	cin>>n;
	ll count=0;
	for(ll i=0;i<=n;i++){
		string s;
		getline(cin,s);
		if(s=="1 1 0"||s=="1 0 1"||s=="0 1 1"||s=="1 1 1"){
			count+=1;
		}
	}
	cout<<count;
	return 0;
}
