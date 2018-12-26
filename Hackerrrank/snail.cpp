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
ll t,n;

//-----------------------------
void Solves()
{
	cin>>n>>t;
	ll tmp=n/4;
	t+=tmp*2;
	ll remain=n%4;
	if(remain==0)
		cout<<t<<endl;
	else
		if(remain==1)
		{
			tmp=tmp*2+1;
			cout<<t-tmp<<endl;
		}
		else
			if(remain==2)
			{
				tmp=(tmp*2+1)*2;
				cout<<t-tmp<<endl;
			}	
			else
				if(remain==3)
					cout<<t-2*tmp<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
