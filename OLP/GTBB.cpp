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
ll n,m,q;
map<ll,pair<ll,ll>> Elements;
//-----------------------------

void Solves()
{
	cin>>n>>m>>q;
	ll a	;
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=m;j++)
		{
			cin>>a;
			if(Elements[a].second==0)
			{
				Elements[a]=mp(i,j);
				cout<<Elements[a].second<<endl;
			}
			if(Elements[a].first == a)
			{
				cout<<Elements[a].first<<"**"<<endl;
				cout<<i<<"***"<<j<<"true"<<endl;
				if(Elements.at(a).second<=j&&Elements.at(a).first>=i)
					Elements[a] = mp(i,j);
			}
					
		}
	}
	ll x;
	for(ll i=0;i<q;i++)
	{
		scanf("%lld",&x);
		printf("%lld %lld\n",Elements.at(x).first,Elements.at(x).second);
	}
	
}

int main()
{
//    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
