#include <bits/stdc++.h>
using namespace std;
#define ll long long

unsigned ll pows(ll a, ll n,ll m)
{
    a%=m;
  	unsigned ll result = 1;
  	while (n>0)
	{
 	   if (n%2!=0) 
			result= (result*a)%m;
    	a= (a*a)%m;
    	n/=2;
  	}
  return result;
}

int main()
{
	ll a,n,m;
	cin>>a>>n>>m;
	cout<<pows(a,n,m)%m;
	return 0;
	
}
