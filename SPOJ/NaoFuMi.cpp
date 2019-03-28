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
	vector <pair<ll,ll> > gold;
//-----------------------------
 
void Solves()
{
	cin>>n;
//	ll rap[n+5], filo[n+5];
	ll r;
	for(ll i=0;i<n;i++)
	{
		cin>>r;
		gold.pb(mp(r,0));
	}
	for(ll i=0;i<n;i++)
	{
		cin>>r;
		gold.pb(mp(r,1));
	}
	sort(gold.rbegin(),gold.rend());
	ll rp=0,fo=0;
	for(ll i=0;i<gold.size();i++)
	{
//		cout<<gold[i].first<<" "<<gold[i].second<<endl;
		if(gold[i].second==0)
		{
//			cout<<i<<endl;
			if(i%2==0)
				rp+=gold[i].first;
			else
				continue;	
		}
		else if(gold[i].second==1)
		{
			if(i%2!=0)
			{
				fo+=gold[i].first;
			}
			else
			{
				continue;
			}
		}
	}
	cout<<rp-fo<<endl;
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
