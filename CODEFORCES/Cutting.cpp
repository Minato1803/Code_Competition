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
ll n,B;
ll CountOdd = 0, CountEven = 0;
//-----------------------------
void Solves()
{
	cin>>n>>B;
	ll a[n+5];
	vector<ll> splits;
	for(ll i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	for(ll i = 0;i<n-1;i++)
	{
		if(a[i]%2 == 0)
			CountEven++;
		else
			CountOdd++;
		if(CountEven == CountOdd)
			splits.pb(abs(a[i] - a[i+1]));		
	}
	sort(all(splits));
	ll result = 0;
	for(ll i = 0;i<splits.size();i++)
	{
		if(B-splits[i]>=0)
		{
			result++;
		}
		B-=splits[i];
	}
	cout<<result<<endl;
}


int main()
{
    buff;
//   Input;
//    Output;
    
    /*clock_t start, end;
    	double time_use;
    start = clock();
    	Solves();
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%f seconds", time_use);*/
    
    Solves();


    return 0;
}
