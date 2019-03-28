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
ll n,k;
//-----------------------------
ll maxx = 0,x[30] = {0}, result=0, value = 0;
bool check =1;
void cases()
{
	int i= n;
	while(i>0&&x[i]!=0)
	{
		x[i] = 0;
		i--;
	}
	if(i>0)
		x[i] = 1;
	else check = 0;	
}
void Solves()
{
	cin>>n>>k;
	ll a[n+5], b[n+5];
	for(ll i=1;i<=n;i++)
		cin>>a[i];
	for(ll i=1;i<=n;i++)
		cin>>b[i];	
	while(check)
	{
		cases();
		ll TmpResult=0, tmp = 0;
//		for(ll i=1;i<=n;i++)
//			cout<<x[i]<<" ";
//			cout<<endl;
		for(ll i=1;i<=n;i++)
		{
			TmpResult += b[i]*x[i];
			tmp += a[i]*x[i];
		}
		if(TmpResult>maxx&&tmp<=k)
		{
			maxx=TmpResult;
		}
	}	
	cout<<maxx<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
