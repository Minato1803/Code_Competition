#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll a,b;
	cin>>a>>b;
	ll year=0;
	while(a<=b)
	{
		a*=3;
		b*=2;
		year++;
	}
	cout<<year;
	return 0;
}
