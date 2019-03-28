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
ll t,n;
ll Prime[10000005]={0};
//-----------------------------

void isPrime()
{
	for(ll i=2;i<=10000000;i++)
	{
		if(Prime[i]==0)
		{
			for(ll j=i*i;j<=10000000;j+=i)
			{
				if(Prime[j]==0)
					Prime[j]=i;
			}
		}
	}
	for(ll i=2;i<=10000000;i++)
	{
		if(Prime[i]==0)
		{
			Prime[i]=i;
		}
	}
}

void factor(ll n)
{
	if(n<=3)
	{
		printf("%lld\n",n);
		return;
	}
	while(n>1)
	{
		printf("%lld ",Prime[n]);
		n/=Prime[n];
	}
	printf("\n");
}

void Solves()
{
	cin>>t;
	isPrime();
	while(t>0)
	{
		cin>>n;
		factor(n);
		t--;
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
