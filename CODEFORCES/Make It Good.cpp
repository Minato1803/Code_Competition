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
ll t,n;
//-----------------------------
void Solves()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n+5];
		ll Count  = 1;
		bool loop = 0;
		for(ll i = 0;i<n;i++)
		{
			cin>>a[i];
		}
		for(ll i = n-1;i>=1;i--)
		{
//			cout<<"show inc:  "<<a[i]<<" "<<a[i-1]<<endl;
				if(a[i]< a[i-1])
				{
					if(loop == 1)
						break;
					Count++;
				}
				else if(a[i] == a[i-1])
				{
					Count++;
				}
				else
				{
					loop = 1;
					Count++;					
				}
		}
//		cout<<"show Count: "<<Count<<endl;
		cout<<n - Count<<endl;	
		
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
