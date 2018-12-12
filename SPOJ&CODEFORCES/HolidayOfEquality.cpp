#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  input			freopen("input.txt", "r", stdin)
#define  output			freopen("output.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================
ll n;
void Solves()
{
	ll maxx = 0, result=0;
	cin>>n;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		maxx = max(maxx,a[i]);	
	}
	for(ll i=0;i<n;i++)
		result += maxx-a[i];	
	cout<<result;
}

int main()
{
    buff;
    //input;
    //output;
    Solves();
    return 0;
}
