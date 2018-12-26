#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	ll n,m,s;
	cin>>n>>m;
	if(n>m){
		s=m;
	}
	else s=n;
	if(n==1||m==1){
		cout<<"Akshat";
		return 0;
	}
	if(n==2||m==2){
		cout<<"Malvika";
		return 0;
	}
	if(s%2==0){
		cout<<"Malvika";
	}
	else cout<<"Akshat";
	return 0;
}
