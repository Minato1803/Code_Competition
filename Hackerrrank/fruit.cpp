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

//====================================================================================================

ll n,k,sum=0;

//-----------------------------
ll factor(ll n, ll k)
{
	ll tmp=1,div=1;
	for(ll i=0;i<k;i++)
	{
		tmp*=(n-i);
		div*=i+1;
		
	}
	return tmp/div;
}

void Solves()
{
	cin>>n>>k;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
		cout<<fix_set(10)<<(double) factor(a[0],k)/factor(sum,k)<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
