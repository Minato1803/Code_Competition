//https://open.kattis.com/contests/rckvjo/problems/hideandseek
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
		ll t;
		cin>>t;
		for(ll i=1;i<=t;i++)
		{
			ll corn;
			cin>>corn;
			if(360%(180-corn)==0)
				cout<<"YES"<<endl;
			else cout<<"NO"<<endl;	
		}		
	return 0;
}
