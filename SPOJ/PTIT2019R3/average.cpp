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
ll maxx = -1;
ll Count = 0;
ll tmp = 0;
//-----------------------------
void Solves()
{
	cin>>n;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		maxx = max(a[i],maxx);
	}
//	cout<<maxx<<endl;
	for(ll i=0;i<n;i++)
	{
		if(a[i]==maxx)
			tmp++;
		else
		{
			Count = max(tmp,Count);
			tmp = 0;
		}	
			
	}
	Count = max(tmp,Count);
	cout<<Count<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
