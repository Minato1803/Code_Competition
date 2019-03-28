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
ll n,d;
//-----------------------------
ll factor(ll n)
{
	ll result=1;
	if(n<3)
		return 0;
	for(ll i=0;i<=2;i++)
	{
		result*=(n-i)/(3-i);
	}
	return result;
}
void Solves()
{
	cin>>n>>d;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll it=0,ans=0;
	for(ll i=0;i<n;i++)
	{
		while(it<n&&abs(a[it]-a[i])<=d)
		{
//			cout<<i<<" "<<it<<"***";
			it++;
		}
			ans+=factor(it-i);
		if(it==n)
			break;
//			cout<<ans<<endl;
//		cout<<endl;
	}
	cout<<ans<<endl;
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
