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
ll n,p,k;
db result = 0;
//-----------------------------

void Solves()
{
	cin>>n>>p>>k;
	ll times[n+5];
	times[0] = 0;
	ll step = 0;
	for(ll i=1;i<=n;i++)
	{
		cin>>times[i];
		result += (times[i] - times[i-1])*(100.0 + step*p)/100.0;
		step++; 
	}
	if(times[n] == k)
	{
		cout<<fix_set(6)<<result<<endl;
		return;
	}
	times[n+1] = k;
	result += (times[n+1] - times[n])*(100.0 + step*p)/100.0;
	cout<<fix_set(6)<<result<<endl;
	
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
