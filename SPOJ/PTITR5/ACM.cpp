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
//-----------------------------

void Solves()
{
	cin>>n;
	ll a[n+5];
	ll b[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	b[0]=a[0];
	for(ll i=1;i<n;i++)
	{
		b[i]= a[i]+b[i-1];
	}
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		if(b[i]>300)
		{
			cout<<i<<" "<<ans<<endl;
			break;
		}
		ans+=b[i];
	}
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
