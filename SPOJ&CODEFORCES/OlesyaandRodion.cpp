//
#include <bits/stdc++.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixed<<setprecision(x)

//====================================================================================================

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll n,t;
	cin>>n>>t;
	if(t==10)
		if(n==1)
			cout<<-1;
		else
		{
			cout<<1;
			for(ll i=0;i<n-1;i++)
			{
				cout<<0;
			}	
		}	
	else
	{
		for(ll i=0;i<n;i++)
		{
			cout<<t;
		}
	}		
		
	return 0;
}
