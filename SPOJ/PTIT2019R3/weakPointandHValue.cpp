#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             long double
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
db aver =0;

//--------3---------------------

void Solves()
{
	cin>>n;
	db a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];	
		aver+=a[i];
	}
	aver/=n;
	ll j =n-1;
	db sum[n+5];
	for(ll i=0;i<n;i++)
	{
		a[i]-=aver;
		if(i!=0)
		{
			sum[i] = sum[i-1]+a[i];
		}
		else
			sum[i] = a[i];
	}
//	for(ll i=0;i<n;i++)
//		cout<<sum[i]<<" ";
//	cout<<endl;	
	db sumMin=20000000007, maxsub=-20000000007;
	for(ll i=0;i<n;i++)
	{
		sumMin = min(sumMin,sum[i]);
		maxsub = max(maxsub,sum[i]-sumMin);
	}
	cout<<fix_set(6)<<maxsub<<endl;

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
