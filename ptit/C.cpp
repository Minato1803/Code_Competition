#include <bits/stdc++.h>
using namespace std;
 
#define  Infile        	freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)
#define  fu(i,a,b) 		for(long long i=(a); i<=(b); ++i)
#define  fd(i,a,b) 		for(long long i=(a); i>=(b); --i)
#define  fo(i,n) 		for(long long i=0; i<(n); ++i)
#define  fix_set(x)     fixed<<setprecision(x)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
 
 
typedef double db;
typedef long long ll;
clock_t TimeBegin, TimeEnd;
ll const INF = 1e18;
ll const Base = 1;
 
 
inline ll mod(string num, ll a);
inline ll diMod(ll A, ll B);
inline ll fpow(ll a,ll x);
inline void Tstart();
inline void Tstop();
 
//declare

 struct coor
 {
 	ll x;
	ll y;
 };
 ll t;
//============//

bool brute(db alp, db beta)
{
	for(ll i = 0;i<1000;i++)
	{
		for(ll j = 0;j<1000;j++)
		{
			if((db) (alp - i) == (db) ((db) j* beta) || 
				(db) (alp + i) == (db) ((db) j* beta) ||
				(db) (alp + i) == (db) ((db) -j* beta) ||
				(db) (alp - i) == (db) ((db) -j* beta))
				{
					if(alp)
					cout<<i<<" "<<j<<endl;
					return 1;
				}
		}
	}
	return 0;
}

bool check2(db alp, db beta, ll mid)
{
	
	ll st = 0, ed = 1000000000;
	while(st <= ed)
	{
		ll bet = st + (ed - st) /2;
		if(alp - bet  < beta)
		{
			st = bet+1;
		}
		else if(alp - bet > beta)
		{
			ed = bet-1;
		}
		else
		{
			return 1;
		}
	}
	st = -1000000000, ed = 0;
	while(st <= ed)
	{
		ll bet = st + (ed - st) /2;
		if(alp - bet  < beta)
		{
			st = bet+1;
		}
		else if(alp - bet > beta)
		{
			ed = bet-1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool check1(ll left, ll right,db alp,db beta)
{
	while(left <= right)
	{
		ll mid = left + (right - left)/2;
		beta = (db) mid * beta;
		if(check2(alp,beta, mid))
			return 1;
		else if(check2(alp, -beta, mid))
				return 1;
		else if(alp - mid < beta)
		{
			left = mid+1;
			check1(left, right, alp, beta);
//			check1(-right,left, alp, beta);	
		}
		else if(alp -mid > beta)
		{
			right = mid-1;
			check1(left, right, alp, beta);
//			check1(-right,left, alp, beta);
		}
		else if(alp -mid == beta || alp +mid == beta)
		{
			return 1;
		}
	}
	return 0;
}


bool check(ll x, ll y, ll a, ll b)
{
	ll left = 0, right = 1000000000;
	db alp = (db) a/ (db) y;
	db beta = (db) x/ (db) y;
//	if(brute(alp,beta))
//		return 1;
//	else
//		return 0;	
	if(check1(left, right, alp, beta))
		return 1;
	else
		return 0;
	left  = -1000000000, right = 0;
	if(check1(left, right, alp, beta))
		return 1;
	else
		return 0;		
}
 
 
void Solve()
{
	cin>>t;
	while(t--)
	{
		coor a,b;
		cin>>a.x>>a.y>>b.x>>b.y;
//		cout<<"bug"<<endl;
		if(check(a.x,a.y,b.x,b.y))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	
}
 
 
//=============================================================================//
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//Infile;
	//Outfile;
	Solve();
 
	return 0;
}
 
//=============================================================================//
//=============================================================================//
 
inline ll mod(string num, ll a) 
{ 
	// tinh string % a
    ll res = 0; 
    fo(i, num.length()) 
         res = (res*10 + (ll)num[i] - '0') %a;
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
 
inline void Tstart()
{
	TimeBegin = clock();
}
 
inline void Tstop()
{
	TimeEnd = clock();
	cout << "\nTime elapsed: " << 1000 * (TimeEnd - TimeBegin) / CLOCKS_PER_SEC << " ms\n";
} 
