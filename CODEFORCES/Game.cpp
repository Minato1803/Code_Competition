#include <bits/stdc++.h>
using namespace std;
#define ll long long

void check(ll c[],ll a[], ll m,ll n)
{
	ll tmp=0, count=0,tmp2=0;
		loop: for(ll i=tmp2;i<m;i++){
		for(ll j=tmp;j<n;j++){	
		if(a[i]>=c[j]){count+=1;tmp=j+1;tmp2+=1; goto loop;}
		if(j==n-1){cout<<count; return;}		}
	}
	cout<< count;
}

int main()
{
	ll n, m;
	cin>>n>>m;
	ll *c= new ll[n];
	for(ll i=0;i<n;i++){
		cin>>c[i];
	}
	ll *a= new ll[m];
	for(ll j=0;j<m;j++){
		cin>>a[j];
//		if(check(c,a,n,m,i)==1){
//			count+=1;
		}
		check(c,a,m,n);
		return 0;
//	cout<<check(c,a,m,n);
//	return 0;
}

