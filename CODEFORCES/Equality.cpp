#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	ll alphabet[95]= {0};
	for(ll i=1;i<=k;i++)
	{
		char alp=i+64;
		if(s.find(alp)==-1)
		{
			cout<<0;
			return 0;
		}
	}
	for(ll i=0;i<s.length();i++)
	{
		alphabet[s[i]]++;
	}
	ll min= alphabet[65];
	for(ll i=65;i<=k+64;i++)
	{
		if(min>alphabet[i])
		{
			min= alphabet[i];
		}
	}
	
	cout<<min*k;
	return 0;
}
