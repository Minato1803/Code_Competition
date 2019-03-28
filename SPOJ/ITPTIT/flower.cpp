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
ll n,k;
ll value;
ll sum;
//-----------------------------

bool cmp(ll a,ll b)
{
	return a>b;
}

void Solves()
{
	scanf("%lld",&n);
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
//		cin>>a[i];
		scanf("%lld",&a[i]);
		sum+=a[i];
	}
	sort(a,a+n,cmp);
//	cin>>k;
	scanf("%lld",&k);
	ll tmp;
	for(ll i=0;i<k;i++)
	{
		scanf("%lld",&value);
		printf("%lld\n",sum-a[value-1]);
	}
}

int main()
{
//    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
