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
ll w,p;
set <ll> result;
set <ll>:: iterator it;
//-----------------------------

void Solves()
{
	cin>>w>>p;
	result.insert(w);
	ll line[p+5];
	for(ll i = 0;i<p;i++)
	{
		cin>>line[i];
		result.insert(line[i]);
	}
	line[p] = w;
	for(ll i = p ;i>=0;i-- )
	{
		for(ll j= 0;j<i;j++)
		{
			ll Num = line[i] - line[j];
			result.insert(Num);
		}
	}
	for(it = result.begin();it!= result.end();it++)
	{
		cout<<*it<<" ";
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
