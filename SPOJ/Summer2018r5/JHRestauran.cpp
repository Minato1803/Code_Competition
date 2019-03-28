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
ll n,a,b,t;
map <ll,ll> type;
//-----------------------------

void Solves()
{
	ll result=0;
	cin>>n>>a>>b;
	for(ll i=0;i<n;i++)
	{
		cin>>t;
		type[t]++;
	}
	if(type[2]>=b)
	{
		result+=(type[2]-b)*2;
		b=0;
	}
	else
	{
		b-=type[2];
	}
	if(type[1]>=(a+b*2))
	{
		result+=(type[1]-(a+b*2));
	}
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
