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
vector <string> name;
ll t;
string n;
//===========

void Result()
{
	//code here
	string tmp;
	for(ll i=0;i<10;i++)
	{
		cin>>tmp;
		name.push_back(tmp);
		
	}
	cin>>t;
	while(t--)
	{
		string max = "";
		cin>>n;
		for(ll i=0;i<n.length();i++)
		{
			if(name[n[i]-48] > max)
			{
				max =  name[n[i]-48];
			}
		}
		cout<< max<<endl;
	}
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
