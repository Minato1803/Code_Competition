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
ll Count = 0;
bool ok = 1; 
//===========

void Result()
{
	//code here
	cin>>s;
	string token = s.substr(1,s.length()-1);
	while(ok)
	{
		token += s[Count];
//		cout<< token << endl;
		for(ll i=0;i<token.length()/2;i++)
		{
			if(token[i] != token[token.length()-1-i])
			{
				goto loop;
			}
		}
		ok = 0;
		loop:
			token.erase(0,1);
			Count++;
			if(Count >= s.length() - 1 && ok == 1)
			{
				cout<<"0";
				return;
			}	
	}
	cout<< Count;
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
