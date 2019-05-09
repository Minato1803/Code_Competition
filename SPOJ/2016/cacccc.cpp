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
ll base = 1000000007;
ll C[1005], PP[1005];
//-----------------------------

inline ll fpow(ll a, ll x, ll Base)
{
	if(x==0)return 1;	
	if(x&1) 
	{
		return a*fpow(a, x-1, Base)%Base;
	} 
	else
	{
		ll t=fpow(a, x/2, Base);
		return t*t%Base;
	}
}

inline ll diMod(ll A, ll B, ll Base)
{
	//(A/B)%Base
	ll result = (A * fpow(B, Base-2, Base)) % Base; 
	return result;
}

void Prepare()
{
	ll x = 1;
	C[0] = 1;
	for (ll i = 1; i <= 1002; i++)
	{
		C[i] = (i*C[i-1])%base;
	}
}

ll CC(ll n, ll k)
{
	if (n == 0)
		return 1;
	else
	{
		ll a = C[n];
		ll b = (C[k]*C[n-k])%base;
		return diMod(a, b, base);
	}
}

ll P(ll k, ll n)
{
	ll tmp = 0;
	for (ll j = 0; j <= k-1; j++)
	{
		tmp = (tmp + (CC(k+1, j)*P(j, n))%base)%base;
	}
	
	ll A = (fpow(n+1, k+1, base)-1)%base;
	
	if (A<tmp)
	{
		A = (A-tmp)%base + base;
	}
	else
		A = (A-tmp)%base;
	ll B = k+1;
	return diMod(A, B, base);
}

void Solves()
{
	ll t, n, k;
	cin >> t;
	Prepare();
	ll tmp = 0;
//	
//	for (ll j = 0; j <= 3; j++)
//	{
//		tmp = (tmp + (CC(j, k+1)*fpow(2, j, base))%base)%base;
//	}
//	cout << tmp;
	while(t--)
	{
		cin >> n >> k;
		PP[0] = n;
		for (ll i = 1; i <= k; i++)
		{
			ll tmp = 0;
			for (ll j = 0; j <= i-1; j++)
			{
				tmp = (tmp + (CC(i+1, j)*PP[j])%base)%base;
			}
			ll A = (fpow(n+1, i+1, base)-1)%base;
			//cout << A << endl;a
			
			if (A<tmp)
			{
				A = (A-tmp)%base + base;
			}
			else
				A = (A-tmp)%base;
				
			ll B = i+1;
			PP[i] = diMod(A, B, base);
		}
		//cout << PP[1] << endl;
		cout << PP[k] << endl;
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
