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
ll n,x,y;
ll Count=0;
//-----------------------------

void Solves()
{
	ll a;
	cin>>n>>x>>y;
	for(ll i=0;i<n;i++)
	{
		cin>>a;
		if(a<=x)
			Count++;
	}
	if(x>y)
	{
		cout<<n<<endl;
		return;
	}	
	else
		if(x<=y)
		{
			if(Count%2==0)
				cout<<Count/2<<endl;
			else
				cout<<(Count/2+1)<<endl;	
		}
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
