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
ll maxx=0, minn=101,maxpos=-1, minpos=-1;
ll ans = 0;
//-----------------------------

void Solves()
{
	cin>>n;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(maxx<a[i])
		{
			maxx = a[i];
			maxpos =i;
		}
		if(minn>=a[i])
		{
			minn = a[i];
			minpos= i;
		}	
	}
	if(maxx==minn)
	{
		cout<<0;
		return;
	}
	if(maxpos>minpos)
		minpos+=1;
	ans = maxpos + n-minpos-1;
	cout<<ans;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
