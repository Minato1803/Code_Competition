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

//====================================================================================================
ll t, n;
ll tmp;
//-----------------------------

ll factor(ll n, ll k)
{
	ll tmp=1,div=1;
	for(ll i=0;i<k;i++)
	{
		tmp*=(n-i);
		div*=i+1;
		
	}
	return tmp/div;
}
void Solves()
{
	cin>>t;
	while(t>0)
	{
		ll even=0, odd=0;
		cin>>n;
		map <ll,ll> remain;
		vector <ll> a;
		for(ll i=0;i<n;i++)
		{
			cin>>tmp;
			remain[tmp%2]++;
		}
		odd = remain[1]*factor(remain[0],2) + factor(remain[1],3);
		even = remain[0]*factor(remain[1],2) + factor(remain[0],3); 
		cout<<odd<<" "<<even<<endl;
		t--;
	}
}

int main()
{
    buff;
//	Input;
//    Output;
    Solves();
    return 0;
}
