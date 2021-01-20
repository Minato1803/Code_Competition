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
ll t;
ll a,b,n;
ll ans, step;
//-----------------------------
void Solves()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>n;
		ll Count = 0;
		while(a <= n && b<=n)
		{
			if(a>b)
			{
				b+=a;
				Count++;
			}
			else
			{
				a+=b;
				Count++;
			}
//			cout<<Count<<": "<<a<<" "<<b<<endl;
			if(a > n || b> n)
				break;
		}
		cout<<Count<<endl;
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
