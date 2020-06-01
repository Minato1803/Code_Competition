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
ll t,n,m;
vector <ll> MinM;
//-----------------------------

void Solves()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll a[n+5], b[n+5];
		map <ll,ll> Count;
		for(ll i = 0;i<n;i++)
		{
			cin>>a[i];
		}
		for(ll i = 0;i<n;i++)
		{
			cin>>b[i];
		}
		for(ll i = 0;i<n;i++)
		{
			if(b[i] == m)
			{
				Count[m]++;
				MinM.push_back(a[i]);
			}
			else
			{
				Count[b[i] - a[i]]++;	
			}
		}
		if(Count[m] <= n-3)
		{
			ll CountTime = 0;
			for(map<ll,ll>::iterator it = Count.begin();it!=Count.end();it++)
			{
				if(it->second >= 2 && it->first != m)
				{
					CountTime++;
					ans = it->first;
				} 
			}
			if(CountTime == 1)
			{
				for(ll i = 0;i<n;i++)
				{
					cout<<a[i] + ans<<" ";
				}
				cout<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		}
		else
		{
			bool check = 0;
			for(map<ll,ll>::iterator it = Count.begin();it!=Count.end();it++)
			{
				if(it->second == 1 && it->first != m)
				{
					ans = it->first;
					for(ll j = 0;j<MinM.size();j++)
					{
						if()
					}
				} 
			}
		}
		
			
	}
	
}

int main()
{
    buff;
//    Input;
//    Output;
//    clock_t start, end;
//    	double time_use;
//    start = clock();
//    	Solves();
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("%f seconds", time_use);
    Solves();
    return 0;
}
