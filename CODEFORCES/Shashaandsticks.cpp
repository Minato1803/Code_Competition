#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,k;
	cin>>n>>k;
	if(n/k%2==0)
		cout<<"NO";
	else cout<<"YES";	
	return 0;
}
