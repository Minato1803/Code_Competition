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
ll result = 1;
ll tmp=0;
//-----------------------------
//dm viet cai de meo ro rang gi het
void Solves()
{ //  1 5 8 10 15
	cin>>n;
	ll a[n+5];
	ll cost[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cost[0]= a[0];
	for(ll i=1;i<n;i++)
	{
		cost[i]=a[i];
		cost[i]+=cost[i-1];
	}
	for(ll i=1;i<n;i++)
	{
//		cout<<cost[i-1]-tmp<<" "<<a[i]<<endl;
		if(cost[i-1]-tmp<=a[i])
		{
			result++;
		}
		else
		{
			tmp+=a[i];
		}
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
