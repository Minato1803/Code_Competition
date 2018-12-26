#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	string n;
	cin>>n;
	ll count=0;
	for(ll i=0;i<n.length();i++){
		if(n[i]=='4'||n[i]=='7'){
			count+=1;
		}
	}
	if(count==4||count==7){
	cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}
