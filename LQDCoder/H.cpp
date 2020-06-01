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
ll n, m;
//-----------------------------

void Solves()
{
	cin>>n>>m;
	ll arr[n];
	for(ll i= 0;i<n-1;i++)
	{
		cin>>arr[i];
	}
	ll left = 1, right = m;
	while(left <= right)
	{
		ll mid = left + (right - left)/2;
		ll SumNum = mid;
		ll tmp = mid;
		for(ll i = 0;i<n-1;i++)
		{
			tmp +=arr[i];
			SumNum+=tmp;
		}
		if(SumNum > m)
		{
			right = mid-1;	
		}
		else if(SumNum < m)
		{
			left = mid+1;
		}
		else
		{
			cout<<mid<<" ";
			tmp = mid;
			for(ll i = 0;i<n-1;i++)
			{
				tmp += arr[i];
				cout<< tmp<<" ";
			}
			return;
		}
	}
	cout<<left<<" ";
	for(ll  i = 0;i<n-1;i++)
	{
		left+=arr[i];
		cout<<left<<" ";
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
