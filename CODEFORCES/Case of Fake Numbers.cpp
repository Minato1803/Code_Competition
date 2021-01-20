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
ll n;
ll Count = 0;
//-----------------------------
void Solves()
{
	cin>>n;
	ll a[n+5];
	ll b[n+5];
	for(ll i =0;i<n;i++)
	{
		cin>>a[i];
		if(a[i] == i)
		{
			Count++;
		}	
	}
	if(Count == n)
	{
		cout<<"YES"<<endl;
		return;
	}
	
	for(ll i = 0;i<n;i++)
	{
		if(i%2 == 0)
		{
			if(i>a[i])
			{
				b[i] = n-i+a[i];
			}
			else
			{
				b[i] = a[i]-i;
			}
		}
		else
		{
			if(i>a[i])
			{
				b[i] = i-a[i];
			}
			else
			{
				b[i] = n-a[i]+i;
			}
		}
	}
	for(ll i = 0;i<n-1;i++)
	{
//		cout<<b[i]<<" ";
		if(b[i] != b[i+1])
		{
			cout<<"NO"<<endl;
			return;
		}
	}
//	cout<<endl;
	cout<<"YES"<<endl;
	
		
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
