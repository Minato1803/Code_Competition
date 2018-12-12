//https://codeforces.com/contest/1051/problem/B
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
	ll r,l;
	cin>>l>>r;
	ll count = r;
	cout<<"YES"<<endl;
	for(ll i=1;i<=(r-l+1)/2;i++)
	{
		cout<<count<<" "<<count-1<<endl;
		count-=2;
	}
	return 0;
}
