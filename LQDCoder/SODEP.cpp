#include <bits/stdc++.h>
using namespace std;

#define  Infile				freopen("input.txt", "r", stdin)
#define  Outfile			freopen("output.txt", "w", stdout)
#define  ms(a, u)			memset(a, u, sizeof(a))
#define  pb(x)				push_back(x)
#define  endl				'\n'

typedef unsigned long long ull;
typedef long long ll;
typedef double db;

db const EPS  = DBL_EPSILON;
ll const INF  = LLONG_MAX;


//declare here
string s;
//===========

void Result()
{
	//code here
	cin>>s;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i] != '4' && s[i]!= '7')
		{
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";
}
	

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//	#ifdef RIMURU
//		Infile;
//		Outfile;
//	#endif
	Result();
	
	return 0;
}
