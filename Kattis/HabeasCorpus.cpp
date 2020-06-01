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

	ll Base = 100000000003;
//-----------------------------

ll multi(ll a, ll b, ll Base)
{
	a %= Base;
	b %= Base;
	ll q = ((long double)b / Base)*a;
	ll r = a * b - q * Base;
	return (r % Base + Base) % Base;
}

//ll mod(string num, ll Base) 
//{ 
//    ll res = 0; 
//    fo(i, num.length()) 
//        res = (res*10 + (ll)num[i] - '0') % Base;
//    return res; 
//} 

ll fpow(ll a, ll x, ll Base)
{
	if(x==0)return 1;	
	if(x&1) 
	{
		return multi(a, fpow(a, x-1, Base), Base);
	} 
	else
	{
		ll t=fpow(a, x/2, Base);
		return multi(t, t, Base);
	}
}

ll diMod(ll A, ll B, ll Base)
{
	//(A/B)%Base
	ll result = (multi(A, fpow(B, Base-2, Base), Base)); 
	return result;
}

void Solves()
{
	cout<<diMod(1,1,Base)<<endl;
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
