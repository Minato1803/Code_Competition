#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,k;
	cin>>n>>k;
	ll pt=0;
	for(ll i=1;i<=n;i++)
	{
		if(k+i*5>240)
		{
			cout<<pt;
			return 0;
		}
		k+=i*5;
		pt++;
	}
//	cout<<k<<endl;
	cout<<pt;
	return 0;
}
