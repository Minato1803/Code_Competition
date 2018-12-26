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
ll t,n;
//-----------------------------

ll Comp(ll n,ll a[],ll len)
{

}

void Solves()
{
	cin>>t;
	for(ll T=0;T<n;T++)
	{
		cin>>n;
		ll a[n+5];
		for(l i=0;i<n;i++)
			cin>>a[i];
		vector Sum;
		Sum.push_back(max_element(a,a+n));	
		for(ll i=2;i<len;i++)
		{
			for(ll j=0;j<len-i+1;j++)
			{
				a[j] = min(a[j],a[j+1]);
			}
		}		
//		for(ll i=0;i<Sum.size();i++)
//		{
//			Sum[i]<<" ";
//		}	
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
