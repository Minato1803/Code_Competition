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
ll n,t,s,d;
vector < pair<ll, ll> > route;
//-----------------------------

void Solves()
{
	cin>>n>>t;
	for(ll i=1;i<=n;i++)
	{
		cin>>s>>d;
		route.pb(mp(s,d));
	}
	ll Min = 1000000000000000000;
	ll Minpos=0;
	for(ll i=0;i<n;i++)
	{
		if(route[i].first==t)
		{
			cout<<i+1<<endl;
			return;
		}
		ll tmp = (t/route[i].second)*route[i].second + route[i].first;
		if(tmp<Min)
		{
			Min = tmp;
			Minpos =i+1;
		}
		cout<<tmp<<endl;
	}
	cout<<Minpos<<endl;
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
