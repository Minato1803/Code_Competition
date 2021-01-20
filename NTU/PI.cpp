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
ll L, R;
bool Prime[1000005] = {0};
//-----------------------------

void checkPrime(ll start, ll end)
{
	for(ll i = 2; i*i<= end;i++)
	{
		for(ll j =max(i*i, (start+i -1)/i*i);j<= end; j+=i)
		{
//			cerr<<Prime[j-L]<<" "<<j-L<<" "<<j<<endl;
			Prime[j-L] = 1;
		}
	}
	
}

void Solves()
{
	cin>>L>>R;
	ll Count = 0;
	checkPrime(L,R);
	for(ll i = L;i<= R;i++)
	{
		if(Prime[i-L] == 0)
		{
//			cout<<i<<endl;
			Count++;
		}
	}
	cout<<Count<<endl;
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
