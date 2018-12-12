#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================

string s[1005];
ll n,m,Count=0;

void Solves()
{
	cin>>n>>m;
	for(ll i=0;i<n;i++)
	{
		cin>>s[i];
	}	
	for(ll i=0;i<n;i++)
	{
		if(s[i].find("*")!=-1)
		{
			for(ll j=s[i].find("*")+1;j<s[i].rfind("*");j++)
			{
				if(s[i][j]=='.')
					Count++;
			}
		}
	}
	cout<<Count;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
