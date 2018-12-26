#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll count=0;
	ll max=0;
	ll a,b;
	for(ll i=0;i<n;i++){
		cin>>a>>b;
		count=count+b-a;
		if(count>max){
			max=count;
		}
	}
	cout<<max;
	return 0; 
}
