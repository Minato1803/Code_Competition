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
ll t,n;
ll calc[] = {1,1,0,2};
ll bin = 0;
string a,b;
//-----------------------------

void Solves()
{
	cin>>t;
	while(t>0)
	{
		cin>>n;
		cin>>a>>b;
		ll result = 1;
		bin=0;
		for(ll i=0;i<a.length();i++)
		{
			if(a[i]=='1'&&b[i]=='1')	
				bin++;
			if(a[i]=='1'&&b[i]=='0')
			{
				cout<<"Nope"<<endl;
				goto loop;
			}	
		}
			if(bin!=0)
			{
				for(ll i=0;i<bin;i++)
					result=(result%1000000007)*(2%1000000007);
				cout<<result%1000000007<<endl;	
			}
			else
			cout<<1<<endl;
		loop:
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
