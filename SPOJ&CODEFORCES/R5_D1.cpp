#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll pow(ll a, ll n,ll m)
{
    ll s=1;
	if(n == 1) {
        return a;
    } 
    loop:  if(n%2==1){
        		s=s*a%m;}
				a=a*a%m;
				n/=2;
				if(n>0){
				goto loop;}
    	return s;
}

int main()
{
	ll a,n,m;
	cin>>a>>n>>m;
	a=a%m;
	n=n%(m-1);
	cout<<pow(a,n,m);
	return 0;
	
}
