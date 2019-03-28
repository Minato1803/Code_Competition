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
ll n, x[30];
//ll maxx = 1e9;
bool check = 1;
bool checkk = 0;
//-----------------------------

void cases()
{
	ll i= n;
	while(i>0&&x[i]!= -1)
	{
		x[i] = -1;
		i--;
	}
	if(i>0)
		x[i] = 1;
	else check = 0;	
}

void Solves()
{
	cin>>n;
	ll a[n+5];
	for(ll i=1;i<=25;i++)
		x[i] = -1;
		
	for(ll i=1;i<=n;i++)
		cin>>a[i];
		
	while(check)
	{
		cases();
		ll TmpResult=0;
		for(ll i=1;i<=n;i++)
		{	
			TmpResult += a[i]*x[i];
		}
		
		if(TmpResult==0||TmpResult%360==0)
		{
			checkk = 1;
		}		
	}
		if(checkk==1)
			cout<<"YES"<<endl;
		else	
		cout<<"NO"<<endl;		
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
