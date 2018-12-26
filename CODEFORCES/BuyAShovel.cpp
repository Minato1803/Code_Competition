#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll k,r;
	cin>>k>>r;
	ll LastDigit = k%10;
	if(LastDigit==0)
	{
		cout<<1;
		return 0;
	}
	ll LastChance = 10;
	for(ll i=1;i<=9;i++)
	{
		ll num = LastDigit*i;
		ll DiNum=num%10;
		if(DiNum==r)
		{
			cout<<i;
			return 0;
		}
		if(DiNum==0)
		{
			LastChance = i;
		}
	}
	if(LastDigit==5)
	{
		cout<<2;
	}
	else 
		cout<<LastChance;	
	return 0;
}
