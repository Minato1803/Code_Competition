#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
ll n;
//-----------------------------
void Solves()
{
	cin>>n;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll j=0,result = -1;
	for(ll i=0;i<n;i++)
	{
		while(j<n&&a[j]-a[i]<=5)
		{
			result= max(result,j-i+1);
			j++;
		}
	}
	cout<<result<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
