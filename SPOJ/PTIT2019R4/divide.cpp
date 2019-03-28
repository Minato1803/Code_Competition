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
ll maxx=0, minn=101,maxpos[2], minpos[2];
ll ans = 0;
//-----------------------------

void Solves()
{
	for(ll i=0;i<2;i++)
	{
		maxpos[i] = minpos[i] = -1;
	}
	cin>>n;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(maxx<a[i])
		{
			maxx = a[i];
			maxpos[0] = maxpos[1] = i;
		}
		else if(maxx==a[i])
				maxpos[1]=i;
		if(minn>a[i])
		{
			minn = a[i];
			minpos[0]= minpos[1]=i;
		}
		else if(minn==a[i])
				minpos[1]=i;	
	}
//	cout<<maxpos[0]<<" "<<minpos[0]<<endl;
//	cout<<maxpos[1]<<" "<<minpos[1]<<endl;
	if(maxpos[0]==minpos[0])
	{
		cout<<0<<endl;
		return;
	}
	else
	{
		for(ll i=0;i<2;i++)
		{
			ll tmpmax = max(maxpos[i],n-maxpos[i]-1);
			ll tmpmin = max(minpos[i],n-minpos[i]-1);
			ans = max(ans,tmpmax);			
			ans = max(ans,tmpmin);			
			
		}
		cout<<ans<<endl;
		
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
