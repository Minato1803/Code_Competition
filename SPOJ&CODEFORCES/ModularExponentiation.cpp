#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll powof2(ll n)
{
	ll tmp=1;
	for(ll i=1;i<=n;i++)
	{
		tmp*=2;
	}
	return tmp;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,m;
	cin>>n>>m;
	if(n>32)
	{
		cout<<m;
		return 0;
	}
	ll tmp= m & (powof2(n)-1);
	cout<<tmp;
	return 0;
}
