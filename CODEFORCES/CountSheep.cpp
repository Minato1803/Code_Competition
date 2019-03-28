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

void Solves()
{
	cin>>n;
	vector < pair <ll,ll> > a;
	ll check[100005];
	for(ll i=0;i<n;i++)
	{
		ll tmp;
		cin>>tmp;
		a.push_back(make_pair(tmp,0));
	}
	sort(all(a));

//	cout<<endl;	
	ll ans=0;
	for(ll i=n-1;i>=1;i--)
	{
		for(ll j=n-2;j>=0;j--)
		{
			if(a[i].first>=2*a[j].first && (a[i].second==0&&a[j].second==0))
			{
				a[i].second = 1;
				a[j].second = -1;
				break;
			}
		}
	}
	for(ll i=0;i<a.size();i++)
		cout<<a[i].first<<"**"<<a[i].second<<endl;
	for(ll i=0;i<a.size();i++)
	{
		if(a[i].second==1||a[i].second==0)
		{
			cout<<a[i].first<<endl;
			ans++;
		}
	}
	cout<<ans<<endl;
}

int main()
{
    buff;
    Input;
//    Output;
    Solves();
    return 0;
}
