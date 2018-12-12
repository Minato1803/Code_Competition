#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/SoHoanHao.in", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================
ll t,n;

void Solves()
{
    cin>>t;
    for(ll T=0;T<t;T++)
    {
    	cin>>n;
		ll a[n+5];
    	for(ll i=0;i<n;i++)
			cin>>a[i];
		for(ll i=0;i<n-1;i++)
		{
			ll count=0;
			for(ll j=i+1;j<n;j++)
			{
				if(a[j]<a[i])
					count++;
				else break;		
			}
			cout<<count<<" ";
		}
		cout<<0<<endl;
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
