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
ll w, l;
//-----------------------------

void Solves()
{
	cin>>w>>l;
	vector<ll> Count(l);
	ll Min[l+5];
	for(ll i=0;i<=l;i++)
	{
		Min[i]=1e9;
	}
	ll a[w+5];
	a[0]=1e9;
	for(ll i=1;i<w;i++)
	{
		cin>>a[i];
	}
	for(ll j=0;j<=w/l;j++)
	{
		if(l+l*j>w)
			break;
//		cout<<l+l*j<<" "<<(l+l*j)-(l-1)<<endl;
		ll stepp=l-1;
		for(ll i=l+l*j;i>=(l+l*j)-(l-1);i--)
		{
//			cout<<stepp<<" "<<i<<" "<<Min[stepp]<<endl;;
			if(i==w)
			{
				stepp--;
				continue;
			}
			Min[stepp]=min(Min[stepp],a[i]);
			Count[stepp]=Min[stepp];
			stepp--;	
		}
//		cout<<endl;
	}
	ll tmp=0;
	for(ll i=0;i<Count.size();i++)
	{
		tmp+=Count[i];
	}
	cout<<tmp<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
//10 2
//2 0 2 2 0 2 2 0 2
}
