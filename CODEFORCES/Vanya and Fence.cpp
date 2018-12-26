#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,h;
	cin>>n>>h;
	ll a,count=0;
	for(ll i=0;i<n;i++){
		cin>>a;
		if(a<=h){
			count+=1;
		}
		else if(a%h==0){
			count+=a/h;
		}
		else count+=(a/h+1);
	}
	cout<<count;
	return 0;
}
