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
map <ll,ll> ele;
ll Pow[35] = {0};
ll Count = 0;
//-----------------------------

void PowerOfT()
{
	Pow[0] = 1;
	for( ll i = 1;i<=32;i++)
	{
		Pow[i] = Pow[i-1]*2;
	}
}

void Solves()
{
	cin>>n;
	ll a[n+5];
	PowerOfT();	
	for(ll i = 0;i<n;i++)
	{
		cin>>a[i];
		ele[a[i]]++;
	}
	for(ll i = 0;i<n;i++)
	{
		loop:
			if(i>=n) 
				break;
		for(ll j = 1;j<32;j++)
		{
			if(ele[Pow[j] - a[i]] > 0 && ((Pow[j] - a[i]) != a[i]))
			{
				i++;
				goto loop;
			}
			else if (ele[Pow[j] - a[i]] > 1 && ((Pow[j] - a[i]) == a[i]))
			{
				i++;
				goto loop;
			}
		}
//		cout<<a[i]<<" "<<Count<<endl;
		Count++;
	}
	cout<<Count<<endl;
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
