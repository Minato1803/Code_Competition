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
ll n;
double root;
double ans =0;
//-----------------------------

void Solves()
{
	cin>>n;
	root = sqrt(n);
	cout<<root<<endl;
	cout<<__gcd((ll) root,n)<<endl;
	for(ll i=sqrt(n);i>=1;i--)
	{
		if(n%i==0)
		{
			cout<<i<<endl;
			return;
		}
	}
		
	for(ll i=sqrt(n);i>=1;i--)
	{
		if(n%i==0)
		{
			ans = root-i;
			if(ans>n/i-root)
			{
				cout<<n/i<<endl;
				return;
			}
			else
			{
				cout<<i<<endl;
				return;
			}
		}
	}
}

int main()
{
    buff;
    Input;
//    Output;
    Solves();
    return 0;
}
