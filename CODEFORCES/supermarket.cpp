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
db n,m;
//-----------------------------

void Solves()
{
	cin>>n>>m;
	db a,b,ft,sd;
	cin>>ft>>sd;
	db ans = m*ft/sd;
	for(ll i=1;i<n;i++)
	{
		cin>>a>>b;
		if (ans > m*a/b ) {
			ans = m*a/b;
		}
	}
	cout<<fix_set(8)<<ans<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
