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

//====================================================================================================
ll n,k;
//-----------------------------

void Solves()
{
	cin>>n>>k;
	ll result,remain,min=1e18;
	for(ll i=1;i<k;i++)
	{
		if(n%i==0) // neu n/du==thuong
		{
			result=n/i;
			remain=i;
			if(min>result*k+remain)
			{
				min=result*k+remain;
			}
		}
	}
	cout<<min<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
