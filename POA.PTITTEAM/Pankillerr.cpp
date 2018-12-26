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
ll t,x;
ll ans[105]={0};
//-----------------------------

ll factor(ll n,ll a,ll b )
{
	ll result=1;
//	cout<<n<<" "<<a<<" "<<b<<endl;	
	if((n==a&&b==0)||(n==b&&a==0))
		return 1;
	if(a>=b)
	{	
		for(ll i=a+1;i<=n;i++)
			result*=i;
		for(ll i=2;i<=b;i++)
			result/=i;	
	}
	else
	{
		for(ll i=b+1;i<=n;i++)
			result*=i;
		for(ll i=2;i<=a;i++)
			result/=i;
	}
	return result;
}

void Step()
{
	ans[0]=1;
	ans[1]=1;
	for(ll i=2;i<=100;i++)
	{
		ll count1=i,count2=i/2;
//		cout<<i<<"****"<<endl;
		for(ll j=0;j<=count2;j++)
		{
			ans[i]+=factor((count1-j*2)+j,j,count1-j*2);
		}
	}
}

void Solves()
{
	scanf("%lld",&t);
	Step();
	while(t>0)
	{
		scanf("%lld",&x);
		printf("%lld\n",ans[x]);
		t--;
	}
}

int main()
{
//    buff;
    Input;
//    Output;
    Solves();
    return 0;
}
