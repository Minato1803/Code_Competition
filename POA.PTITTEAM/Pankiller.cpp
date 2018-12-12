#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output2.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================

ll t,x;

ll fact(ll a)
{
	ll s=1;
	for(ll i=2;i<=a;i++)
	{
		s*=i;
	}
	return s;
}
ll ups(ll a,ll b)
{
	ll s=a;
	for(ll i=b+1;i<a;i++)
	{
		s*=i;
	}
	return s;
}

void Solves()
{
	cin>>t;
	for(ll T=0;T<t;T++)
	{
		cin>>x;
		ll count=1;
		if(x<=1)
		{
			cout<<1<<endl;
			continue;
		}
		ll count2=x/2;
		for(ll i=count2;i>=1;i--)
		{
			if(x-i*2==0)
			{
				count+=1;
				continue;
			}
				if(x-i*2>i)
					count+=ups(x-i*2+i,x-i*2)/fact(i);
				else
					count+=ups(x-i*2+i,i)/fact(x-i*2);
		}
		cout<<count<<endl;

	} 
}

int main()
{
    buff;
    //Input;
//    Output;
    Solves();
    return 0;
}
