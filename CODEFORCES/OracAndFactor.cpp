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
ll n,k,t;
ll Prime[1000005] ={0};
//-----------------------------

void check()
{
	for(ll i = 2;i*i<=1000000;i++)
	{
		if(Prime[i] == 0)
		{
			for(ll j= i*2;j<=1000000;j+=i)
			{
				if(Prime[j] == 0)
				{
	//				if(j == 8)
	//					cout<<i<<"bugg"<<endl;
					Prime[j] = i;
				}
			}	
		}
	}
	for(ll i = 2 ; i<=1000000;i++)
	{
		if(Prime[i] == 0)
			Prime[i] = i;
	}
}

void Solves()
{
	check();
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
//		cout<<Prime[n]<<endl;
		if(n %2 != 0)
		{
			if(k>=2)
				cout<<n+ Prime[n] + (k-1)*2<<endl;
			else
				cout<<n+ Prime[n]<<endl;;	
		}
		else
		{
			cout<<n + k*2<<endl;
		}
		
		
	}
}


int main()
{
    buff;
   /* Input;
    Output;*/
    
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
