#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)
#define  lowb(a,x) 		lower_bound(a.begin(),a.end(),x)-a.begin();
#define  upb(a,x) 		upper_bound(a.begin(),a.end(),x)-a.begin();
#define  fu(i,a,b)		for(long long i=(a); i<=(b); ++i)
#define  fd(i,a,b)		for(long long i=(a); i>=(b); --i)
#define  fo(i,n)		for(long long i=0; i<(n); ++i)
#define  fix_set(x)		fixed<<setprecision(x)
#define  ms(a,x)		memset(a, x, sizeof(a))
#define  all(x)			(x).begin(), (x).end()
#define  mp(a,b)		make_pair(a, b)
#define	 fst			first
#define	 snd			second

typedef long long ll;
clock_t TimeBegin, TimeEnd;
ll const INF = LLONG_MAX;

inline ll mod(string num, ll Base);
inline ll diMod(ll A, ll B, ll Base);
inline ll fpow(ll a, ll x, ll Base);
inline string toString(ll n);
inline void Tstart();
inline void Tstop();


//declare
set <string> ans;
string s;
vector <pair<ll, ll> > pos;
stack <ll> st;
ll n, XOP[15];
//============//

ll Try(ll i)
{
	if (i == n)
	{
		string tmp = s;
		ll f = 0;
		fo(k, n)
		{
			if (XOP[k] == 1)
			{
				tmp[pos[k].fst] = '@';
				tmp[pos[k].snd] = '@';
				f++;
			}
		}
		if (f != 0)
		{
			string ad = "";
			while(tmp.find("@") != -1)
			tmp.erase(tmp.find("@"),1);
			ans.insert(tmp);
		}
	}
	else
	{
		fo(j, 2)
		{
			XOP[i] = j;
			Try(i+1);
		}
	}
}

void Solve()
{
	cin >> s;
	ms(XOP, 0);
	fo(i, s.length())
	{
		if (s[i] == '(')
			st.push(i);
		if (s[i] == ')')
		{
			ll a = st.top();
			st.pop();
			pos.push_back(mp(a, i));
		}
	}
	n = pos.size();
	//cout << pos.size() << endl;
	Try(0);
	for (auto x : ans)
		cout << x << endl;
}


//=============================================================================//

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifdef RAVENCLAW
		Infile;
		//Outfile;
	#endif
		Solve();

	return 0;
}

//=============================================================================//
//=============================================================================//

inline ll mod(string num, ll Base) 
{ 
    ll res = 0; 
    fo(i, num.length()) 
        res = (res*10 + (ll)num[i] - '0') % Base;
    return res; 
} 

inline ll fpow(ll a, ll x, ll Base)
{
	if(x==0)return 1;	
	if(x&1) 
	{
		return a*fpow(a, x-1, Base)%Base;
	} 
	else
	{
		ll t=fpow(a, x/2, Base);
		return t*t%Base;
	}
}

inline ll diMod(ll A, ll B, ll Base)
{
	//(A/B)%Base
	ll result = (A * fpow(B, Base-2, Base)) % Base; 
	return result;
}

inline string toString(ll n) 
{
	stringstream ss; ss << n;
	return ss.str();
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
