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
#define modnum			1000000007
//====================================================================================================
ll Count=0;
ll n,k;
ll maxdiv=0;
//-----------------------------

ll moduloPow(ll a, ll b)
{
	ll ret = 1;
    a %= modnum;
    b %= modnum - 1;
    while (b > 0)
    {
        if (b % 2 > 0)  
	    	ret = ret * a % modnum;
        a = a*a % modnum;
        b /= 2;
    }
    return (ll) ret;
}

void Solves()
{
	cin>>n>>k;
	ll a[n+5]; 
	ll numer=0,denumer=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		Count+=a[i];
		if(maxdiv<a[i])
			maxdiv=a[i];
	}
	for(ll i=0;i<n;i++)
	{
		a[i] = Count-a[i];
	}
	denumer = moduloPow(k,Count);
	for(ll i=0;i<n;i++)
	{
		numer+= moduloPow(k,a[i])%modnum;
	}
	numer%=modnum;
	cout<<numer<<" "<<denumer<<endl;
	cout<<(__gcd(numer,denumer))<<endl;
}

int main()
{
    buff;
    Input;
//    Output;
    Solves();
    return 0;
}
