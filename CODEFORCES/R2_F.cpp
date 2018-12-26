#include<iostream>
#include <vector>
#include <string.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
	ll *a= new  ll[n];
	ll S=0,s=0;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		S+=a[i];
	}
	if (n==1){ cout<<"NO"; return 0;}
	for(ll i=0;i<n;i++){
		s+=a[i];
		if(S-s==s){ cout<<"YES"; return 0;}
	}
	cout<<"NO";
	return 0;
	
}
