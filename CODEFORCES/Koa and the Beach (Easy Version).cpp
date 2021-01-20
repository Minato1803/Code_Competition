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
ll n,k,l;
//-----------------------------
void Solves()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>l;
		ll a[n+5];
		vector <ll> wall;
		for(ll i = 0;i<n;i++)
		{
			cin>>a[i];
			if(a[i] > l)
			{
				cout<<"NO"<<endl;
				return;
			}
		}
		cout<<"case1"<<endl;
		ll stepIns = 1 , stepDec = 0, Count = 0, timing = 0;
		for(ll i = 0;i<n;i++)
		{
			cout<<"evi: "<<stepIns<<" "<<stepDec<<" "<<timing<<endl;
			if(a[i] + stepIns - stepDec <= l)
			{
				Count++;
			}
			if(timing == 2*k)
				{
					timing = 0;
				}
				timing++;
				if(timing <= k)
					stepIns++;
				else
					stepDec++;
		}
		if(Count == n)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"case2"<<endl;
			stepIns = k , stepDec = 1, Count = 0, timing = k+1;
			for(ll i = 0;i<n;i++)
			{
				cout<<"evi: "<<stepIns<<" "<<stepDec<<" "<<timing<<endl;
				if(a[i] + stepIns - stepDec <= l)
				{
					Count++;
				}
				if(timing == 2*k)
				{
					timing = 0;
				}
				timing++;
				if(timing <= k)
					stepIns++;
				else
					stepDec++;	
			}
			if(Count == n)
			{
				cout<<"Yes"<<endl;
			}
			else
				cout<<"No"<<endl;			
		}
			
		
	}
//	7 2 3
//	3 0 2 1 3 0 1
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
