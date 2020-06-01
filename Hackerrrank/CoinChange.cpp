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
ll n ,m;
//-----------------------------

void Solves()
{
	cin>>n>>m;
	ll coin[m+5];
	for(ll i = 0;i<m;i++)
	{
		cin>>coin[i];
	}
	sort(coin, coin+m);
	ll Count[n+5];
	ms(Count,0);
	Count[0] = 1;
	for(ll i = 0;i<m;i++)
	{
		for(ll j = coin[i]; j<=n;j++)
		{
			Count[j]+= Count[j - coin[i]];
		}
	}
//	for(ll i = 0;i<=n;i++)
//	{
//		cout<<Count[i]<<" ";
//	}
//	cout<<endl;
	cout<<Count[n];
	
}

int main()
{
    buff;
//    Input;
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
