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

//====================================================================================================
ll t;
string s;
//-----------------------------

ll change(char c)
{
	return (ll) c-65;
}
char ChangeNum(ll c)
{
	return c+65;
}

ll value(ll a,ll b,string s )
{
	ll Sum=0;
	for(ll i=a;i<b;i++)
		Sum+=(ll) (s[i]-65);
	return Sum;		
}

void Solves()
{
	cin>>t;
	ll SumRo= 0;
	for(ll T=0;T<t;T++)
	{
		cin>>s;
		SumRo = value(0,s.length()/2,s) % 26;
		for(ll i = 0;i < s.length()/2;i++)
			s[i] = ChangeNum((change(s[i]) + SumRo) % 26);	 
		SumRo = value(s.length()/2,s.length(),s) % 26;
		for(ll i=s.length()/2;i<s.length();i++)
			s[i] = ChangeNum((change(s[i]) + SumRo) % 26);	 
		for(ll i=0;i<s.length()/2;i++)
			s[i] = ChangeNum((change(s[i]) + change(s[i + s.length()/2])) % 26);	 
		s.erase(s.length()/2);
		cout<<s<<endl;
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
