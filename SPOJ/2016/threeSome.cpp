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
ll n,a;
//vector <ll> abil;
//-----------------------------

ll comp(ll a,ll b, ll c)
{
	ll tmp = max(a,b);
	tmp = max(tmp,c);
	return tmp;
}

void Solves()
{
	cin>>n;
	ll prob[n+5][11];
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<11;j++)
		{
			cin>>prob[i][j];
		}
	}
	ll ans = -1;
	for(ll i=0;i<n-2;i++)
	{
		for(ll j=i+1;j<n-1;j++)
		{
			for(ll it=j+1;it<n;it++)
			{
				ll tmp = 0;
				for(ll k=0;k<11;k++)
				{
					tmp+= comp(prob[i][k],prob[j][k],prob[it][k]);
				}
				if(tmp>ans)
				{
					ans = tmp;
				}
			}
		}
	}
	cout<<ans<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
//    clock_t start, end;
//    	double time_use;
//    start = clock();
//    	Solves();
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("%f seconds", time_use);
    Solves();
    return 0;
}
