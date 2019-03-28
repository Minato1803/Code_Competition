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
ll t;
ll n,a,b;
ll result;
//-----------------------------

void Solves()
{
	cin>>t;
	while(t>0)
	{
		cin>>n>>a>>b;
		result = a*n;
		if(n%2==0)
		{
			ll tmp=b*(n/2);
			result=min(result,tmp);
		}
		else
		{
			ll tmp = b*(n/2)+a;
			result =min(result,tmp);
		}
		cout<<result<<endl;
		t--;
	}
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
