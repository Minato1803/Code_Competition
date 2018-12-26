// cach tinh 1 line = (n+1)/2*n
// cach tinh n line = (n*(n+1)*(n+2))/6
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll i=1;
	while(i*(i+1)*(i+2)/6<=n)
	{
		i++;
	}
	cout<<i-1;
	return 0;
}
