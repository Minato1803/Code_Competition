#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
ll n;
bool rects[105][105];
ll x1,x2,y2;
//-----------------------------

void Solves()
{
	ms(rects,0);
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>x1>>x2>>y2;
		if(y2==0)
			continue;
		for(ll j=0;j<y2;j++)
		{
			for(ll it = min(x1,x2);it<max(x1,x2);it++)
				{
					rects[j][it]=1;
				}
		}	
	}
	ll ans=0;
	for(ll i=0;i<=100;i++)
	{
		for(ll j=0;j<=100;j++)
		{
			if(rects[i][j]==1)
				ans++;
//			cout<<rects[i][j]<<" ";
		}
//		cout<<endl;
	}
	cout<<ans<<endl;
}

int main()
{
    buff;
    Input;
//    Output;
//    clock_t start, end;
//    	double time_use;
//    start = clock();
//    	Solves();
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("%f seconds", time_use);
    Solves();
    return 0;
}
