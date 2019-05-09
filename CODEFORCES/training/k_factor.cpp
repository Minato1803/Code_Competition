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
ll prime[100005]={0};
ll n,k,Count=0;
vector <ll> fact;
//-----------------------------

void isPrime()
{
	for(ll i=2;i*i<=100000;i++)
	{
		if(prime[i]==0)
		{
			for(ll j=i*i;j<=100000;j+=i)
				if(prime[j]==0)
					prime[j]=i;
		}
	}
	for(ll i=0;i<=100000;i++)
		if(prime[i]==0)
			prime[i]=i;
}

void Solves()
{
	isPrime();
	cin>>n>>k;
	while(n>1)
	{
		if(Count==k-1)
			break;
		Count++;
		fact.pb(prime[n]);
		n/=prime[n];
	}
	if(n == 1)
		cout<<-1<<endl;
	else
	{
		for(ll i=0;i<k-1;i++)
			cout<<fact[i]<<" ";
		cout<<n;	
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
