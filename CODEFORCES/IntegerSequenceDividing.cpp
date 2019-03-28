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

//-----------------------------

void Solves()
{
	ll n;
	cin>>n;
	ll sum = n*(2+(n-1))/2;
	if(sum%2==0)
		cout<<0<<endl;
	else
		cout<<1<<endl;		
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
