#include <bits/stdc++.h>
using namespace std;

#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/input.txt", "w", stdout)
#define  ll             long long
#define  db             double
#define	 fst			first
#define	 snd			second
#define  pb				push_back
#define  mp				make_pair
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  fix_set(x)     fixed<<setprecision(x)
#define  all(x)         (x).begin(), (x).end()
#define  allArr(x,n)	x, x+n
#define  vp(x,y)		vector< pair<x,y> >
#define  testCase		ll t; cin>>t; while(t--)
#define  flr(i,x,n)		for(long long i = (x); i<(n); ++i)
#define  frl(i,n,x)		for(long long i = (n); i>=(x); --i)
#define  filr(it,x)		for(it = (x).begin(); it!=(x).end(); it++)
#define  firl(it,x)		for(it = (x).rbegin(); it!=(x).rend(); it++)


ll const INF = 1e18;
ll const Base = 1;
inline ll mod(string num, ll a);
inline ll diMod(ll A, ll B);
inline ll fpow(ll a,ll x);
inline bool cmpArr(ll a, ll b);
//====================================================================================================
ll a,b;
//-----------------------------
void Solves()
{
	cin>>a>>b;
	ll Count = 0, ans = 0;
	vector<ll> bt;
	bt.pb(1);
	bt.pb(0);
	if(b<2)
	{
		cout<<0<<endl;
		return;
	}
	else if(b== 2)
	{
		cout<<1<<endl;
		return;
	}
	ll step = bt.size()-1;
	while(1)
	{
		if(Count>=a && Count<=b)
		{
			ans++;
		}
		if(bt[1] == 0)
		{
			bt.pb(1);
			bt[bt.size()-1] = 0;
			bt[1] = 1;
			step = bt.size()-1;
				Count=2<<step-1;
//			cout<<Count<<" "<<bt.size()<<endl;
			if(Count>b)
				break;
			Count = 0;
			flr(i,0,bt.size())
			{
				if(i == 0)
				{
					Count+=1;
					continue;
				}
				Count=Count+(bt[bt.size()-1-i]*(2<<i-1));
			}
//				flr(i,0,bt.size())
//				{
//					cout<<bt[i];
//				}
//				cout<<" ans1: "<<Count<<endl;
			if(Count>=a && Count<=b)
			{
				ans++;
			}
		}
		bt[step] = 1;
		bt[step-1] = 0;
		Count =0;
		flr(i,0,bt.size())
		{
			if(i == 0)
			{
				Count+=1;
				continue;
			}
			Count=Count+(bt[bt.size()-1-i]*(2<<i-1));
		}
//			flr(i,0,bt.size())
//			{
//				cout<<bt[i];
//			}
//			cout<<" ans2: "<<Count<<endl;
		step--;
	}
	cout<<ans<<endl;
}

int main()
{
    buff;
//  Input;
//  Output;
    
    /*clock_t start, end;
    	double time_use;
    start = clock();
    	Solves();
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%f seconds", time_use);*/
    
    Solves();
    return 0;
}

//====================================================================================================

inline ll mod(string num, ll a) 
{ 
	// tinh string % a
    ll res = 0; 
    flr(i,0, num.length()) 
         res = (res*10 + (ll) num[i] - '0') %a;
    return res; 
} 
 
inline ll fpow(ll a,ll x)
{
	 //tinh (a^x) % Base
	if(x==0)return 1;	
	if(x&1) 
	{
		return a*fpow(a,x-1)%Base;
	} 
	else
	{
		ll t=fpow(a,x/2);
		return t*t%Base;
	}
}
 
inline ll diMod(ll A, ll B)
{
	//tinh (A/B) % Base
	ll result = (A * fpow(B, Base-2)) % Base; 
	return result;
}

inline bool cmpArr(ll a, ll b)
{
	return a>b;
}
