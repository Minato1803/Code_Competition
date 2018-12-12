//
#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define db              double
#define fix_set(x)      fixed<<setprecision(x)
#define buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input			freopen("input.in", "r", stdin)
#define output			freopen("output.out", "w", stdout)

//====================================================================================================

ll Solves(ll n)
{
 	ll s=1;
	 for(ll i=n;i>=2;i--)
 	{
 		s*=(i%1000000007)%1000000007;
	}
	return s;
}

int main()
{
    buff;
//    input; output;
	ll m;
	cin>>m;
	for(ll i=1;i<=m;i++)
	{
		ll n;
		cin>>n;
		cout<<Solves(n)<<endl;
	}
    return 0;
}
