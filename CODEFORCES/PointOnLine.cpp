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
ll n,d,ans=0;
//vector < vector<ll> > Count;
//-----------------------------
ll factor(ll n)
{
	ll tmpup=1,tmpdown=1;
	for(ll i=n;i>max((ll) 2,n-2);i--)
	{
		tmpup*=i;
	}
	for(ll i=1;i<=min((ll) 2,n-2);i++)
	{
		tmpdown*=i;
	}
	return tmpup/tmpdown;
}


void Solves()
{
	cin>>n>>d;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll pos=0;
	vector<ll>::iterator low;
	for(ll i=0;i<n-1;i++ )
	{
		vector <ll> Count;
		for(ll j=i+1;j<n;j++)
		{
			Count.pb(a[j]-a[i]);
		}
//		for(ll i=0;i<Count.size();i++)
//			cout<<Count[i]<<" ";
//		cout<<endl;	
		low = lower_bound (Count.begin(), Count.end(), d);
		if(low!=Count.end())
		{
			ll tmp= *low;
		cout<<tmp<<endl;
		if(tmp<2)
			continue;
		ans+=factor(tmp);
		}
	}
	cout<<ans;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
