#include<iostream>
#include <vector>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
#define ll signed long long

ll EmNguQuenMat(ll a[], ll n,ll i, ll d)
{   ll count =0;
	ll tmp = (a[i+1]-d)-(a[i]+d);
	if(tmp>0) { count = 2;}
	if(tmp==0) { count = 1;}
	return count;
}

int main()
{
	ll n, d, count=0;
	cin>>n>>d;
	ll *a= new ll[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=0;i<n-1;i++){
		count+= EmNguQuenMat(a,n,i,d);}
	cout<<count+2;	
	return 0;
}
