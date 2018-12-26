#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check( ll n,ll a[])
{
	loop: a[n%10]+=1;
		if(a[n%10]==2){
			return 0;
		}
		n/=10;
		if(n>0){
			goto loop;
		}
		return 1;
	
}

int main()
{
	ll n;
	cin>>n;
	ll a[10];
	loop1: for(ll i=0;i<10;i++){
		a[i]=0;
	}
	 n+=1;
	if(check(n,a)!=0){
		cout<<n;
	}
	else goto loop1;
}
