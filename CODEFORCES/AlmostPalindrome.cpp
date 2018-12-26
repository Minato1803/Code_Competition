#include <bits/stdc++.h>
using namespace std;

#define  Input        	freopen("input.txt", "r", stdin)
#define  Output			freopen("output.txt", "w", stdout)
#define  fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define  fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define  fo(i,n) 		for(int i=0; i<(n); ++i)
#define  fix_set(x)     fixed<<setprecision(x)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)


typedef double db;
typedef long long ll;
ll const MAX = 1e18;
ll const Base = 1;

inline ll fpow(ll a,ll x) {if(x==0)return 1;	if(x&1) {return a*fpow(a,x-1)%Base;} else{ll t=fpow(a,x/2);return t*t%Base;}}  //tinh (a^x) % Base
inline ll diMod(ll A, ll B){ll result = (A * fpow(B, Base-2)) % Base; return result;};		//tinh (A/B) % Base




//declare

string s;
vector < pair<char,char> > chars;

//============//

void solve()
{
	cin>>s;
	ll count=0;
	for(ll i=0;i<s.length()/2;i++)
	{
		if(s[i]!=s[s.length()-1-i])
		{
			count++;
			chars.push_back(make_pair(s[i],s[s.length()-1-i]));
		}
		if(count>=3)
		{
			cout<<"NO";
			return ;
		}
	}
		if(count==0)
		{
			cout<<"YES";
			return;
		}
		if(count==1)
		{
			if((s.length()&1)==1&&(chars[0].first==s[s.length()/2]||chars[0].second==s[s.length()/2]))
				cout<<"YES";
			else cout<<"NO";	
		}
		if(count==2)
		{
			if(((chars[0].first==chars[1].second)&&(chars[1].first==chars[0].second)))
				cout<<"YES";
			else	
			if(((chars[0].first==chars[1].first)&&(chars[1].second==chars[0].second)))
				cout<<"YES";
			else		
			cout<<"NO";	
		}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	//Output;
	solve();
	
	return 0;
}
