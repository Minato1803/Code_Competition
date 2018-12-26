#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll x,y;
	cin>>x;
	ll count=1;
	for(ll i=1;i<x;i++){
		y=x^i;
		if(y==x+i){
			count+=1;
		}
	}
	cout<<count;
	return 0;
}
