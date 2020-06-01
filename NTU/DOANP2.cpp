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
struct path
{
	
} 
ll Count = 0;

//-----------------------------

void Solves()
{
	cin>>n;
	ll a,b;
	for(ll i=0;i<n;i++)
	{
		cin>>a>>b;
		path.pb(mp(a,b));
	}
	sort(all(path));
	pair <ll,ll> tmp;
	tmp = path[0];
	
	for(ll i=0;i<n;i++)
	{
		if(path[i].first > tmp.second )
		{
			Count += tmp.second - tmp.first;
			tmp = path[i];
		}
		else
		 	if(path[i].second > tmp.second )
			{
				tmp.second = path[i].second;
			}
	} 
	Count += tmp.second - tmp.first;
	cout<< Count<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
