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
ll n;
//===========

void Result()
{
	//code here
	cin>>n;
	db tmp = 2 + sqrt(2);
	if(n % tmp== 0)
	{
		cout<<"YES";
	}
	else
		cout<<"NO";
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
