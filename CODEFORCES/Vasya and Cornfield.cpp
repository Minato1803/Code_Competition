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
ll n,d,m;
//-----------------------------
void Solves()
{
	cin>>n>>d>>m;         
	ll x,y;
	for(ll i = 0;i< m;i++)
	{
		cin>>x>>y;
		if(x>d && y < n-d) //(d,0) (n, n-d)
		{
			if(x + (n-y) <= n+d && x + (n-y) >= n-d)
				cout<<"YES"<<endl;
			else	
				cout<<"NO"<<endl;
		}
		else if(x < d &&  y < d) // (0,d) (d,0)
		{
			
			if(x + y >= d)
				cout<<"YES"<<endl;
			else	
				cout<<"NO"<<endl;
		}
		else if(x < (n-d) && y > d) // (0,d) (n-d, n)
		{
			if((n-x) + y <= n+d)
				cout<<"YES"<<endl;
			else	
				cout<<"NO"<<endl;
		}	
		else if(x > (n-d) && y > n-d) // (n-d,n) (n, n-d)
		{
			if((n-x) + (n-y) >= d)
				cout<<"YES"<<endl;
			else	
				cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
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
