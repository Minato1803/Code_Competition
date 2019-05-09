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
ll n,a;
map <ll,ll> Count;
map <ll,ll>:: iterator it;
//-----------------------------

void Solves()
{
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>a;
		Count[a]++;
	}
	if(Count.size()<=2)
	{
		it = Count.end();
		it--;
		ll tmp = it->first - Count.begin()->first;
		if(tmp%2==0)
		{
			cout<<tmp/2<<endl;
		}
		else
			cout<<tmp<<endl;
	}
	else
	{
		if(Count.size()==3)
		{
			ll tmp = 0;
			for(it = Count.begin();it!=Count.end();it++)
			{
				tmp  += it->first;
			}
			it = Count.begin();
			it++;
			if(tmp%3==0 && tmp/3 == it->first)
			{
				cout<<it->first - Count.begin()->first;
				return;	
			}
		}
		cout<<-1<<endl;
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
