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
ll n,k;
//-----------------------------
bool cmp(ll a, ll b)
{
	return a>b;
	
}
void Solves()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll a[n+5], b[n+5];
		ll sumA = 0, sumB = 0, summ = 0;;
		for(ll i = 0;i<n;i++)
		{
			cin>>a[i];
		}
		for(ll i = 0;i<n;i++)
		{
			cin>>b[i];
		}
		sort(a, a+n);	
		sort(b, b+n,cmp);
		for(ll i = 0;i<n;i++)
		{
			if(k>0)
			{
				summ+= max(a[i],b[i]);
			}
			else
				summ+= a[i];
			k--;	
		}
		cout<<summ<<endl;
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
