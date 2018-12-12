#include <bits/stdc++.h>
using namespace std;

#define  Input        	freopen("input.txt", "r", stdin)
#define  Output			freopen("output.txt", "w", stdout)
#define  fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define  fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define  fo(i,n) 		for(int i=0; i<(n); ++i)
#define  fix_set(x)     fixed<<setprecision(x)
#define  ms(a,x)    	memset(a, x, sizeof a)
#define  all(x)         (x).begin(), (x).end()
#define  allarr(x,n)	(x, x + n)


typedef double db;
typedef long long ll;
ll const MAX = 1e18;
ll const Base = 1;

inline ll fpow(ll a,ll x) {if(x==0)return 1;	if(x&1) {return a*fpow(a,x-1)%Base;} else{ll t=fpow(a,x/2);return t*t%Base;}}  //tinh (a^x) % Base
inline ll diMod(ll A, ll B){(A * fpow(B, Base-2)) % Base;};		//tinh (A/B) % Base

//link:
//====================================================


//declare
string s, bomb;
//============//

ll cmp(string s, string sb)
{
	ll Count=0;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]==sb[0])
		{
			Count++;
		}
	}
	return Count;
}
void solve()
{
//	scanf ("%s%s",&s, &bomb);
	cin>>s>>bomb;
	if(bomb.length()==1)
	{
		if(cmp(s,bomb)==s.length()) cout<<"FRULA";
		else
			for(ll i=0;i<s.length();i++)
			{
				if(s[i]!=bomb[0])
				{
					cout<<s[i];
				}
			}
		return;
	}
	
	while(s.find(bomb)!=-1)
	{
		s.erase(s.find(bomb),bomb.length());
	}
	if(s.length()==0) cout<<"FRULA";
	cout<<s;
}

int main()
{
//	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//Input;
	//Output;
	solve();
	return 0;
}
