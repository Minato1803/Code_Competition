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
	ll a[n+5][m+5]	;
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=m;j++)
		{
			cin>>a[i][j];		
		}
	}
	ll x;
	for(ll i=0;i<q;i++)
	{
		scanf("%lld",&x);
		ll maxxr = 1e9, maxxc=-1e9,maxx=x;;
		for(ll i=1;i<=n;i++)
		{
			for(ll j=m;j>=1;j--)
			{
					if(a[i][j]>=maxx&&maxxr>=i&&maxxc<=j)
					{
						maxx=a[i][j];
						maxxr=i;
						maxxc=j;
					}			
			}
		}
		if(maxxr!=1e9&&maxxc!=-1e9)
			cout<<maxxr<<" "<<maxxc<<endl;
		else
			cout<<-1<<" "<<-1<<endl;	
		nextt:;
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
