#include<iostream>
#include <vector>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
#define ll long long

int main()
{
	ll a,b,x;
	cin>>a>>b>>x;
	vector <ll> v;
	for(ll i=0;i<a;i++){
		v.push_back(0);
	}
	for(ll i=0;i<b;i++){
		v.push_back(1);
	}
	if(x>=2){
		for(ll i=1;i<x;i++){
			if(i==1||i%2!=0){
				v.erase(v.begin());
				v.push_back(0);
			}
			if(i%2==0){
				v.erase(v.begin()+(a-(i/2))-1);
				v.push_back(1);
			}
		}
	}
	for(ll i=0; i< v.size();i++){
		cout<<v[i];
	}	
	return 0;
}
