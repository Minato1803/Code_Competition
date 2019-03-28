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
ll q;
//-----------------------------

void Solves()
{
	ll l,r,d;
	cin>>q;
	for(ll i=0;i<q;i++)
	{
		cin>>l>>r>>d;
		if(d<l||d>r)
		{
			cout<<d<<endl;
		}
		else
		{
			cout<<(r/d+1)*d<<endl;
				
		}
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
