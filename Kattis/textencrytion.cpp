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
ll n; 
string s; 
//============//

void solve()
{
	while(1)
	{
		cin>>n;
		if(n==0) return;
			cin.ignore();
			getline(cin,s);
			string ans="";
			for(ll i=0;i<s.length();i++)
			{
				if(s[i]!=' ')
				{
					s[i]=toupper(s[i]);
					ans+=toupper(s[i]);
				}
				else
				{
					s.erase(i,1);
					i--;
				}	
			}
			if(s.length()<=n+1)
				cout<<s<<endl;
			else
			{	
//		cout<<s<<"*"<<ans<<endl;
				ll pos=0;
				for(ll i=0;i<n;i++)
				{
					ll oldpos=i-n;
					for(ll j=0;j<=(s.length()/n);j++)
					{
						oldpos+=n;
//						cout<<oldpos<<" ";
						if(oldpos>s.length()-1)
							break;
						ans.replace(oldpos,1,1,s[pos]);
						pos++;
//						cout<<pos<<" "<<s[pos]<<endl;
					}
				
				}
				cout<<ans<<endl;
			}
		}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	Input;
//	Output;
	solve();
	return 0;
}
