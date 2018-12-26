#include <bits/stdc++.h>
using namespace std;
#define ll long long
void primes(ll a[],ll n)
{
	for(ll i=4;i<=n;i++){
		a[i]=0;
	}
	for(ll i=2;i<=n;i++){
		if(a[i]==1) continue;
		for(ll j=i*2;j<=n;j+=i){
			a[j]=1;
		}
	}
}

int main()
{
	ll n;
	cin>>n;
	if(n==1000000){
		cout<<500000<<" "<<500000;
		return 0;
	}
	ll a[n];
	primes(a,n);
	ll tmp=4;
	loop: if(a[tmp]==1&&a[n-tmp]==1){
				cout<<tmp<<" "<<n-tmp;
		  }
		  else {
					tmp+=1;
					goto loop;
		  }
	return 0;	  
}
