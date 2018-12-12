#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>> n;
	ll w[n], h[n];
	ll check=0;
	cin>>w[0]>>h[0];
	for(ll i=1;i<n;i++)
	{
		cin>>w[i]>>h[i];
		if(((h[i-1]<h[i])&&(h[i-1]<w[i]))||((w[i-1]<h[i])&&(w[i-1]<w[i])))
		{
			check=1;
		}
		if((h[i-1]>=h[i])||(h[i-1]>=w[i])||(w[i-1]>=h[i])||(w[i-1]>=w[i]))
			check=0;
		
	}
	
	if(check==0)
		cout<<"YES";
	else cout<<"NO";
	return 0;
}
