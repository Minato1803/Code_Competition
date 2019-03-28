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

ll	x,y,z;
ll a,b,c;

//-----------------------------

void Solves()
{
	cin>>x>>y>>z;
	cin>>a>>b>>c;
	if(a<x||((a-x)+b)<y||(a+b+c)<(x+y+z))
	{
		cout<<"NO";
		return;
	}
	cout<<"YES";
	
}

int main()
{
    buff;
//    Input;
    //Output;
    Solves();
    return 0;
}
