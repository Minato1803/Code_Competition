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
	map <ll,ll> num;
	ll n;
	cin>>n;
	ll a[n+5];
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		num[a[i]]++;
	}
	ll check=0;
	for(ll i=1;i<=n;i++)
	{
		if(num[a[i]]==1)
		{
			check+=1;
		}
	}
	if((check%2==0&&check!=0)||check==1)
	{
		cout<<"YES"<<endl;
		for(ll i=1;i<=check;i++)
		{
			if(i%2!=0) cout<<"B";
			else cout<<"A";
		}
	}
	else cout<<"NO";
	return 0;
}
