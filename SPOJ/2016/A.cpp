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
ll a, b, n = 1;
//-----------------------------

bool isPrime(ll x)
{
	if (x < 2)
		return false;
	for (ll i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}
void Solves()
{
	cin >> a >> b;
	if (a == b)
	{
		n = 1;
	}
	else
	{
		if (a < b)
		swap(a, b);
		if ((a-b) > b)
		{
			if (isPrime(a-b))
			{
				n = a-b-b;
			}
			else
			{
				n = 1e9+7;
				for (ll i = 1; i <= sqrt(a-b); i++)
				{
					if ((a-b)%i == 0)
					{
						if (i > b)
							n = min(n, (i-b));
						if ((a-b)/i > b)
							n = min(n, ((a-b)/i-b));
					}
				}
			//	cout << n << endl;
			}
		}
		else
		{
			n = (a/(a-b)+1)*(a-b) - a;
		}
	}
	cout << n << endl;
//	ll test = (a+1)*(b+1)/__gcd(a+1, b+1), tmp = 1;
//	for (ll i = 2; i <= 50000; i++)
//	{
//		if (((a+i)*(b+i)/__gcd(a+i, b+i)) < test)
//		{
//			test = (a+i)*(b+i)/__gcd(a+i, b+i);
//			tmp = i;
//		}
//	}
//	cout << tmp << " " << test;
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
