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
ll t,Count= 0;
string s="";
string dd = "",mm="",yy="";
string MaxD ="31", MaxM = "12", MaxY="9999"; 
//============//

bool check(string years)
{
	ll tmp = stol(years);
	if(tmp%4 == 0 && tmp%100 != 0 || tmp%400 == 0)
	{
		return 1;
	}
	return 0;
} 
 
void Solve()
{
	cin>>t;
	while(t--)
	{
		cin>>dd>>mm>>yy;
		s +=(dd+mm+yy);
		sort(s.begin(), s.end());
		do
		{
			dd= s.substr(0,2);
			mm= s.substr(2,2);
			yy = s.substr(4,4);;
//			cout<<dd<<" "<<mm<<" "<<yy<<endl;
			if(yy >= "2000")
			{		
				if(	mm == "01" || 
					mm == "03" || 
					mm == "05" ||
					mm == "07" ||
					mm == "08" ||
					mm == "10" ||
					mm == "12")
				{
					if(dd >= "01" && dd <= "31")
					{
						Count++;
						if(yy < MaxY)
						{
							MaxY = yy;
							MaxM = mm;
							MaxD = dd; 
						}
						else if(yy == MaxY)
						{
							if(mm < MaxM)
							{
								MaxY = yy;
								MaxM = mm;
								MaxD = dd;
							}
							else if(mm == MaxM)
							{
								if(dd < MaxD)
								{	
									MaxY = yy;
									MaxM = mm;
									MaxD = dd;
								}
							}
						}
					}
				}
				if(	mm == "04" || 
					mm == "06" || 
					mm == "09" ||
					mm == "11")
				{
					if(dd >= "01" && dd <= "30")
					{
						Count++;
						if(yy < MaxY)
						{
							MaxY = yy;
							MaxM = mm;
							MaxD = dd; 
						}
						else if(yy == MaxY)
						{
							if(mm < MaxM)
							{
								MaxY = yy;
								MaxM = mm;
								MaxD = dd;
							}
							else if(mm == MaxM)
							{
								if(dd < MaxD)
								{	
									MaxY = yy;
									MaxM = mm;
									MaxD = dd;
								}
							}
						}
					}
				}
				if(mm == "02")
				{
					if(dd >= "01" && dd <= "29" && check(yy) == 1)
					{
						Count++;
						if(yy < MaxY)
						{
							MaxY = yy;
							MaxM = mm;
							MaxD = dd; 
						}
						else if(yy == MaxY)
						{
							if(mm < MaxM)
							{
								MaxY = yy;
								MaxM = mm;
								MaxD = dd;
							}
							else if(mm == MaxM)
							{
								if(dd < MaxD)
								{	
									MaxY = yy;
									MaxM = mm;
									MaxD = dd;
								}
							}
						}
					}
					else
					{
						if(dd >= "01" && dd <= "28" && check(yy) == 0)
						{
							Count++;
							if(yy < MaxY)
							{
								MaxY = yy;
								MaxM = mm;
								MaxD = dd; 
							}
							else if(yy == MaxY)
							{
								if(mm < MaxM)
								{
									MaxY = yy;
									MaxM = mm;
									MaxD = dd;
								}
								else if(mm == MaxM)
								{
									if(dd < MaxD)
									{	
										MaxY = yy;
										MaxM = mm;
										MaxD = dd;
									}
								}
							}
						}	
					}
				}	
			}
		}
		while(next_permutation(s.begin(), s.end()));
		if(Count > 0)
			cout<<Count<<" "<<MaxD<<" "<<MaxM<<" "<<MaxY<<endl;
		else
		{
			cout<<0<<endl;	
		}	
		s= "";
		MaxD ="31"; 
		MaxM ="12"; 
		MaxY ="9999";
		Count = 0; 
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
