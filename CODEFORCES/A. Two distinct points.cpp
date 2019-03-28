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
ll q;
ll l1,r1,l2,r2;
//-----------------------------

void Solves()
{
	cin>>q;
	for(ll i=0;i<q;i++)
	{
		cin>>l1>>r1>>l2>>r2;
		if(l2==l1&&r2==r1)
		{
			cout<<l2<<" "<<l2+1<<endl;
		}
		else
		{
				if(l2==l1)
				{
					cout<<r1<<" "<<r2<<endl;
				}
				else
				{
						cout<<l1<<" "<<l2<<endl;
				}
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
