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
#define MOD 998244353
ll n;
string s;
ll result;
//-----------------------------

void Solves()
{
	cin>>n;
	vector <ll> alp;
	ll Count=1;
	cin>>s;
	
	if(n==2)
	{
		cout<<n+1;
		return;
	}
	
	for(ll i=0;i<s.length()-1;i++)
	{
		if(s[i]==s[i+1])
		{
			Count++; 
		}
		else
		{
			alp.pb(Count);
			Count = 1;
		}	
	}
	alp.pb(Count);
//	cout<<alp[0]<<" "<<alp[alp.size()-1]<<" "<<alp.size()<<endl;
	if(s[0]==s[s.length()-1])
	{
			result = ((alp[0]+1)*(alp[alp.size()-1]+1))%MOD;	
	}
	else	
		result = (alp[0]+alp[alp.size()-1]+1)%MOD;
	
	cout<<result<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
