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

ll n,m,x,y,z,a;
string b;

void Solves()
{
	cin>>n>>m;
	string team[n+5];
	cin>>x>>y>>z;
	team[x]="";
	team[y]="";
	team[z]="";
	for(ll i=0;i<m;i++)
	{
		cin>>a>>b;
		if(team[a].find(b)==-1)
			team[a]+=b;
//		cout<<team[a]<<endl;	
	}
		cout<<team[x].length()<<" "<<team[y].length()<<" "<<team[z].length();
}

int main()
{
    buff;
    //Input;
//    Output;
    Solves();
    return 0;
}
