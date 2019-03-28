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
ll n;
ll Max, Min;
ll posMax, posMin=0;
//-----------------------------

void Solves()
{
	cin>>n;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	Min=min(a[0],a[1]);
	Max=max(a[1],a[2]);
	for(ll i=1;i<n-2;i++)
	{
		ll tmpMax = max(a[i+1],a[i+2]);
//		Max= max(tmpMax,Max);
		ll tmpmin = min(a[i],a[i+1]);
		Min= min(tmpmin,Min);
		
	}
	cout<<Max-Min<<endl;
	
}
//7 5 2 3 1

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
