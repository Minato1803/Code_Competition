#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output2.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================

void Solves()
{
	ll n;
	cin>>n;
	ll result = 0, hire = 0, crime = 0;
	for(ll i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		if(hire==0&&a==-1)
			result++;
		else
			hire+=a;	
	}
	cout<<result;
	
}

int main()
{
    buff;
    //Input;
//    Output;
    Solves();
    return 0;
}
