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
	ll n;
	cin>>n;
	ll a[n+5];
	ll even=0, odd=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0) even++;
		else odd++;
	}
	
	if(odd==0)
		cout<<"Second";
	else
			cout<<"First";	
	return 0;
}
