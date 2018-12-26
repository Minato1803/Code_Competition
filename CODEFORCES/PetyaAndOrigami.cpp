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
ll n,k;

void Solves()
{
	cin>>n>>k;
	ll red = 2*n, green = 5*n, blue = 8*n;
	ll result = (red%k==0?red/k:red/k+1) + (green%k==0?green/k:green/k+1) + (blue%k==0?blue/k:blue/k+1); 
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
