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
string s, ans, str;
ll num[11], l, t;
bool big = false, found = false;
//============//

void Try(ll i)
{
	if (!found)
	{
		if (i == l && str != s && !found)
		{
			found = true;
			ans = str;
		}
		else
			fd(j, 9, 0)
			{
				if (j == 0 && i == 0)
					continue;
				if (num[j] > 0)
				{
					if (big)
					{
						str[i] = j + 48;
						num[j]--;
						Try(i+1);
						num[j]++;
					}
					else
					{
						if (j <= (s[i] - 48))
						{
							if (j < s[i] - 48)
							{
								str[i] = j + 48;
								num[j]--;
								big = true;
								Try(i+1);
								num[j]++;
							}
							else
							{
								str[i] = j + 48;
								num[j]--;
								Try(i+1);
								num[j]++;
							}
						}
					}
				}
			}
	}
}

void Solve()
{
	cin >> s;
	str = s;
	ms(num, 0);
	fo(i, s.length())
	{
		num[s[i] - 48]++;
	}
//	fo(i, 10)
//		cout << num[i] << " ";
	l = s.length();
	found = false;
	big = false;
	Try(0);
	if (found)
		cout << ans << endl;
	else
		cout << -1 << endl;
}


//=============================================================================//

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//Infile;
	//Outfile;
	cin >> t;
	while(t--)
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
