#include <bits/stdc++.h>
using namespace std;
#define ll signed long long

ll min(ll a[], ll N)
{	ll m= a[0];
	for(ll i=0;i<N;i++){
		if(m>a[i]){ m=a[i];}
	}
	return m;
}

ll hieu(ll a[], ll b[],ll j, ll N)
{
	for(ll i=0;i<N;i++){
		if(b[i]!=a[i]%j){ return 0;}
	}
	return 1;
}

int main()
{
	ll N;
	cin>>N;
	ll *a= new ll[N];
	ll *b= new ll[N];
	for(ll i=0;i<N;i++){
		cin>>a[i];
	}
	for(ll i=0;i<N;i++){
		cin>>b[i];
	}
		for(ll j=1;j<=min(a,N);j++){
			if(hieu(a,b,j,N)==1){cout<< j; return 0;}
		}
		cout<<"-1";
		return 0;
}
