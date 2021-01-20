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
ll n,m;
//-----------------------------
void Solves()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll a[n+5], b[m+5], ans = 0;
		map <ll,ll> Count;
		ll result;
		for(ll i = 0;i<n;i++)
		{
			cin>>a[i];
			Count[a[i]]++;
		}
		for(ll i = 0;i<m;i++)
		{
			cin>>b[i];
			if(Count[b[i]]> 0)
			{
				ans = 1;
				result = b[i];
			}
		}
		if(ans!= 0)
		{
			cout<<"YES"<<endl;
			cout<<ans<<" "<<result<<endl;
		}
		else
			cout<<"NO"<<endl;
		
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
