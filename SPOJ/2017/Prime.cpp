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
ll Prime[10000005];
ll arr[10000007];
ll a,b,k,t,Count;
vector <ll> Primes;
//-----------------------------

void isPrime()
{
	for(ll i=2;i<=10000000;i++)
	{
		Prime[i]=1;
		arr[i] = 0;
	}
	for(ll i=2;i*i<=10000000;i++)
	{
		if(Prime[i]==1)
		{
			for(ll j=i*i;j<=10000000;j+=i)
			{
					Prime[j]=0;
			}
		}
	}
	for(ll i=2;i<=10000000;i++)
	{
		if(Prime[i]==1)
			Primes.pb(i);
	}
    
	for(ll i=0;i<Primes.size();i++)
	{
		for(ll j=1;j<=10000000/Primes[i];j++)
			arr[j*Primes[i]]++;
	}
}

void Solves()
{
	isPrime();
	scanf("%lld", &t);
	ll pc = t;
	while(t--)
	{
		Count=0;
		scanf("%lld %lld %lld", &a,&b,&k);   
		for(ll i=a;i<=b;i++)
		{
			if(arr[i]==k)
			{
				++Count;
//				cout<<i<<" "<<Count<<endl;
			}
		}
		printf("Case #%lld: %lld\n",pc-t,Count);
	}
}

int main()
{
//    buff;
//    Input;
//    	Output;
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
