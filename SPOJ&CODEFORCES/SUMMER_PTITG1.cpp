#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dembanh(ll a[],ll c[],ll n)
{
	ll min=(c[0]/a[0]);
	for(ll i=0;i<n;i++){
		if(c[i]/a[i]==0){ return 0;}
		c[i]/=a[i];
		if(min>c[i]){min=c[i];}
	}
	return min;
}

ll cookie(ll a[], ll b[],ll n,ll k)
{
	ll c[n],min=(b[0]/a[0]);
	for(ll i=0;i<n;i++){
		b[i]/=a[i];
		if(min>b[i]){min=b[i];}
	}
	for(ll i=0;i<n;i++){
		c[i]=b[i]-min*a[i];
	}
	ll dem=0,pt=a[0];
	for (ll i=0;i<n;i++){
        for(ll j=n-1;j>i;j--){
		if(c[j-1]>c[j]){
         		swap(c[j-1], c[j]);
				 swap(a[j-1],a[j]);}
		}
	}
loop:
	for(ll i=0;i<n;i++){
			if(a[i]<pt){pt=a[i];}
			if(c[i]<a[i]&&k>(a[i]-c[i])){
				k=k-(a[i]-c[i]);
				c[i]=c[i]+(a[i]-c[i]);
			}
				dem+=dembanh(a,c,n);
				for(ll i=0;i<n;i++){
					c[i]-=a[i];
				}
			}		
	if(k>pt){goto loop;}
	return min+dem;
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

//loop:
//	for(ll i=0;i<n;i++){
//			if(a[i]<pt){pt=a[i];}
//			if(c[i]<a[i]&&k>(a[i]-c[i])){
//				k=k-(a[i]-c[i]);
//				c[i]=c[i]+(a[i]-c[i]);
//			}
//		if(dembanh(a,c,n)==0) return min;
//			else{
//				dem+=dembanh(a,c,n);
//				for(ll i=0;i<n;i++){
//					c[i]-=a[i];
//				}
//			}		
//		}
//	if(k>pt){goto loop;}
