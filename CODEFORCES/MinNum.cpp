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
ll x, y, z, n, t;
//-----------------------------

void Solve()
{
	cin >> x >> y >> z >> n;
	ll ans = (x*((y*z)/__gcd(y,z))/(__gcd(x,(y*z)/__gcd(y,z))));
	//cout << ans << " ";
	ll chr = (floor(log10(ans))+1);
	ll bg = fpow(10, n-1);
	ll en = fpow(10, n);
	if (chr > n)
		cout << -1 << endl;
	else
	{
		ll b = 1;
		ll ans2 = ans * (bg/ans);
		//cout << bg << endl;
		if (ans2+ans <= en && ans2+ans >= bg)
			cout << ans+ans2 << endl;
		else
			cout << -1 << endl;
	}
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//Infile;
	//Outfile;
	cin >> t;
	while (t--)
		Solve();
 
	return 0;
}
