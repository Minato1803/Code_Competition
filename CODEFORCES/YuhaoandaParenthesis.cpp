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
string s;
vector <tuple <ll,ll,ll> > mount;
map <ll,ll> CountL;
map <ll,ll> CountR;
ll CountT;
//-----------------------------
ll check(string s)
{
	stack <char> brace;
	ll LB=0,RB=0,TB=0;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]=='(')
		{
			brace.push(s[i]);
			LB+=1; 
		}
		else
		{
			if(!brace.empty()) 
			{
				if(s[i]==')')
				{
					if(brace.top()=='(')
					{
						TB+=1;
						LB-=1;
					}
				}
				brace.pop();
			}
			else
			{
				RB+=1;
			}
		}
	}
	mount.push_back(make_tuple(LB,TB,RB));
}

void Solves()
{
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>s;
		check(s);
	}

//	for(ll i=0;i<mount.size();i++)
//		cout<<get<0>(mount[i])<<" "<<get<1>(mount[i])<<" "<<get<2>(mount[i])<<endl;
	for(ll i=0;i<mount.size();i++)
	{
		if(get<2>(mount[i])==0)
			CountL[get<0>(mount[i])]++;
		if(get<0>(mount[i])==0)	
			CountR[get<2>(mount[i])]++;
		if(get<0>(mount[i])==0&&get<2>(mount[i])==0&&get<1>(mount[i])!=0)
			CountT++;
	}
	ll ans=0;
	for(ll i=1;i<=5*1e5;i++)
	{
		if(CountL[i]!=0&&CountR[i]!=0)
		{
			ans+=min(CountL[i],CountR[i]);
		}
	}
	cout<<ans+CountT/2<<endl;		
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
