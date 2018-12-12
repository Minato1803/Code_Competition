#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll tang(ll a[], ll k,ll n)
{ 
	ll max = a[0],pt=0;
	for(ll i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
			pt=i;
		}
	}
	ll count =0;
	for(ll i=0;i<n;i++){
		loop:	if(max!=a[i]){
					a[i]+=k; count+=1;
					if(a[i]>max) return -1;
						else goto loop;
		}
	}
	return count;
}

int main()
{
	ll n,k;
	cin>>n>>k;
	ll *a= new ll[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<tang(a,k,n);
	return 0;
}
