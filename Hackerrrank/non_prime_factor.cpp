#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output2.txt", "w", stdout)
#define  fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define  fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define  fo(i,n) 		for(int i=0; i<(n); ++i)
#define  fix_set(x)     fixed<<setprecision(x)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)

//declare
ll n,q, Prime[2000005]={0}, ans[2000005];
//============//

ll Isprime()
{
for (ll i = 2; i * i <= 2000000; ++i) {
    if (Prime[i] == 0) 
	{
        for (ll j = i * i; j <= 2000000; j += i) 
		{
            if (Prime[j] == 0) 
			{
                Prime[j] = i;
            }
        }
    }
}
	for (int i = 2; i <= 2000000; ++i) 
	{
    	if (Prime[i] == 0)
		{
        	Prime[i] = i;
    	}
	}
	for(ll i=2;i<=2000000;i++)
	{
		ll n=i;
		if(n==Prime[n])
		{
			ans[n] = 1;
			continue;
		}
		ll biengicungduoc = 1, x=1, Count=1, temp = Prime[n];
		while(n!=1)
		{
			n/=Prime[n];
			if(temp == Prime[n])
				x++;	
			else
			{
				temp = Prime[n];
				if(n!=1)
					Count++;
				biengicungduoc*=x+1;
				x=1;
			}
		}
		ans[i] = biengicungduoc-Count;
	}
	
}
void solve()
{
	Isprime();
	scanf("%lld",&q);
	for(ll i=0;i<q;i++)
	{
		scanf("%lld",&n);
		printf("%lld/n",ans[n]);
	}
	
}

int main()
{
	//ios_base::sync_with_stdio(false); cin.tie(NULL);
//	Input;
//	Output;
	solve();
	return 0;
}
