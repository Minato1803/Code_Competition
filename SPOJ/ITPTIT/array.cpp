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
ll n;
//-----------------------------
/*	a[1]+a[2]=3
	a[1]+a[3]=6
	a[1]+a[4]=7*
	
	a[3]-a[2]=3
	a[2]+a[3]=5*/
void Solves()
{
	cin>>n;
	ll a[n+5][n+5];
	ll result[n+5];
	for(ll i=1;i<=n;i++)
		for(ll j=1;j<=n;j++)
			cin>>a[i][j];
	for(ll i=3;i<=n;i++)
		for(ll j=2;j<i;j++ )
		{
			a[i][j]=a[1][i]-a[1][j];
		}
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";			
		}
		cout<<endl;
	}
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
