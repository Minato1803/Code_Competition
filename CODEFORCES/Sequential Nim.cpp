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
/*void Solves()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n+5];
		ll step  = 0, Count  = 0;
		for(ll i= 1;i<=n;i++)
			cin>>a[i];
		for(ll i= 1;i<=n-1;i++)
		{
			if(a[i] != 1)
			{
				Count++;
			}
		}
//		cout<<Count<<endl;
		for(ll i= 1;i<=n-1;i++)
		{
			if(step%2 == 0)
			{
				if(a[i] == 1)
				{
					step++;
				}
				else
				{
					if((n-i) %2 == 0)
					{
						if(Count%2 == 0)
							step+=2;
						else
							step++;		
					}
					else
					{
						if(Count%2 == 0)
							step++;
						else
							step+=2;	
					}	
					Count--;
				}	
			}
			else
			{
				if(a[i] == 1)
					step++;
				else
				{
					if((n-i) %2 != 0)
					{
							step+=2;
					}
					else
					{
						if(Count%2 == 0)
							step+=2;
						else	
							step++;
					}	
					Count--;
				}
			}
			cout<<"step: "<<step<<" Count: "<<Count<<endl;
		}
	//	cout<<step<<endl;
		if(step%2 == 0)
			cout<<"First"<<endl;
		else
			cout<<"Second"<<endl;
	}
}*/

void Solves()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n+5];
		ll step  = 0, Count  = 0;
		for(ll i = 0;i<n;i++)
		{
			cin>>a[i];
		}
		for(ll i = 0;i<n;i++)
		{
			if(a[i] == 1)
				Count++;
			else
				break;	
		}
		if(n%2 != 0 && Count == n)
			cout<<"First"<<endl;	
		else if(n%2 == 0 && Count == n)
			cout<<"Second"<<endl;
		else if(Count %2 == 0)
			cout<<"First"<<endl;				
		else if((Count %2 != 0))
			cout<<"Second"<<endl;
	}
}


int main()
{
    buff;
//    Input;
//    Output;
    
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
