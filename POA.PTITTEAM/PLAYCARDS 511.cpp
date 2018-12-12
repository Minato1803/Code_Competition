#include <bits/stdc++.h>
using namespace std;
#define ll signed long long

ll check(ll n, ll a[], ll b[])
{ 
	ll count=0;
	if(n==1){
		if(a[0]==511||b[0]==511){
			return 0;}
		if(a[0]>b[0]) return 1;
			else return 0;	
		}
	
	for(ll i=0; i<n;i++){
		ll dem =0;
		if(a[i]==511){continue;}
		for(ll j=0; j<n;j++){
			if(b[j]==511){continue;}
			if(a[i]>b[j]){ dem+=1;}
			if(a[i]==b[j]){return -1;}
		}
		if(dem==n-1||dem==n/2){return -1;}
		if(dem==n){count+=1;}
		
	}
	if(count==n-1) { return -1;}
	if(count==n) { return 1;}
	if(count==0) { return 0;}
	
}
int main()
{ 
	ll n;
	cin>>n;
  	ll *a=new ll[n];
  	for(ll i=0;i<n;i++){
		cin>>a[i];}
	ll *b=new ll[n];
	for(ll i=0;i<n;i++){
		cin>>b[i];}
	for(ll i=0;i<n;i++){
		if(a[i]==511||b[i]==511){
			if(check(n,a,b)==0){
				cout<< "lose";
				return 0;
			}
		}		
	}
	if(check(n,a,b)==1){
		cout<<"win";
		return 0;}
	if(check(n,a,b)==-1){
		cout<<"unsure";
		return 0;}
	if(check(n,a,b)==0){
		cout<<"lose";}		
	return 0;	
}
