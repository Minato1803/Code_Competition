#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/input.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================
ll n,ans=0;
bool days[500]={0};
void Solves()
{
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		for(ll j=a;j<=b;j++)
			days[j] = 1;
	}
	for(ll i=1;i<=365;i++)
		if(days[i])
			ans++;
	cout<<ans<<endl;		
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
