#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,m,a,b;
	cin>>n>>m>>a>>b;
	if(m==1)
	{
		if(b>=a)
		{
			cout<<a*n;
		}
		else
		{
			cout<<b*n;
		}
	}
	else
	{
		if(m*a>=b)
		{
			ll sp=n/m;
			if(n%m==0){ cout<<sp*b; return 0;}
			if(sp*b+b<=sp*b+(n%m)*a){
				cout<<sp*b+b;
			}
			else cout<<sp*b+(n%m)*a;
		}
		else
		{
			cout<<n*a;
		}
	}
	return 0;
}
