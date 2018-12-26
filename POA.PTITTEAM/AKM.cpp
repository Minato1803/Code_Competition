#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
ll t,n,k;
//-----------------------------


void Solves()
{
	ll a;
	scanf("%lld",&t);
	while(t>0)
	{
		scanf("%lld%lld", &n,&k);
		vector <vector <ll> > ans(n);
		ll max=-1,tmp=0;
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&a);
			ans[0].pb(a);
		}
		for(ll i=1;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			{
				scanf("%lld",&a);
				for(ll it=0;it<ans[i-1].size();it++)
				{
					ans[i].pb(ans[i-1][it]*10 + a);
					if(i==n-1&&max<(ans[i-1][it]*10 + a) % k)
					{
						tmp = ans[i-1][it]*10 + a;
						max = tmp % k;
					}
				}
					
			}
		}
		printf("%lld\n",tmp);
		t--;
	}
		
}

int main()
{
//    buff;
    Input;
    Output;
    Solves();
    return 0;
}
