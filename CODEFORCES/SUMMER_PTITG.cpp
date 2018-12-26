#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll cookie(ll a[], ll b[],ll n,ll k)
{
	ll c[n], min=b[0],pt=0;
	for(ll i=0;i<n;i++){
		if(min>b[i]){min=b[i]; pt=i;}
	}
	min=b[pt]/a[pt];	
	for(ll i=0;i<n;i++){
		c[i]=b[i]-min*a[i];
	}
	for(ll i=0;i<n;i++){
		if(k<=0){break;}
		if(c[i]<a[i]&&k>0){
			if(k<(a[i]-c[i])){break;}
			c[i]=c[i]+(a[i]-c[i]);
			k=k-(a[i]-c[i]);}
		}
	ll dem=c[0];pt=0;	
	for(ll i=0;i<n;i++){
		if(c[i]/a[i]==0){return min;}
			else
			{
				if(c[i]<dem){dem=c[i];pt=i;}
				}
	}
	return min+(dem/a[pt]);
}

int main()
{
	ll n,k;
	cin>>n>>k;
	ll *a=new ll[n];
	ll*b=new ll[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=0;i<n;i++){
		cin>>b[i];
	}
	cout<<cookie(a,b,n,k);
	return 0;
	
}
