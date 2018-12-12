//
#include <bits/stdc++.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixced<<setprecision(x)

//====================================================================================================

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll n,m;
	cin>>n>>m;
	ll ans=0;
	ll a=min(n,m), b= max(n,m);
	if(2*a<=b)
	{
		ans = a;
		cout<<ans;
		return 0;
	}
	while (!(n==0||m==0||(n==1 && m==1)))
	{
		if(n>m)
		{
			n-=2;
			m-=1;
			ans++;
		}
		else
		{
			n-=1;
			m-=2;
			ans++;
		}
	}
	cout<<ans;	
	return 0;
}
