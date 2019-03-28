#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/input.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
#define MOD 1000000007
ll n,ans[10000005];
//-----------------------------

void Solves()
{
	ans[0] = 1;
	ans[1] = 0;
	for(ll i=2;i<=1e7;i++)
	{
		ans[i] = (2*ans[i-1]%MOD + 3*ans[i-2]%MOD)%MOD;
	}
	cin>>n;
	cout<<ans[n];
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
