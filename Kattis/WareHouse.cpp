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
ll n,t,a;
string s;
//-----------------------------

bool cmp(pair <string, ll> a, pair <string, ll> b)
{
	if ((a).second != (b).second)
			return (b).second < (a).second;

		return (a).first < (b).first;
}

void Solves()
{
	cin>>t;
	while(t--)
	{
		map <string, ll>toys;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			cin>>s>>a;
			toys[s] +=a;
		}
		map <string, ll>::iterator it;
		vector< pair<string, ll> > Count;
		for(it = toys.begin();it!= toys.end();it++)
		{
			Count.pb(mp(it->first,it->second));
		}
		sort(Count.begin(), Count.end(),cmp);
		cout<<Count.size()<<endl;
		for(ll i= 0;i<Count.size();i++)
		{
			cout<<Count[i].first<<" "<<Count[i].second<<endl;
		}
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
