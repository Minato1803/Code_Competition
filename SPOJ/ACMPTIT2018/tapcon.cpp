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
ll n,m;
map <ll,ll> remain;
//-----------------------------

void Solves()
{
	cin>>n>>m;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		remain[a[i]%m]++;
	}
	if(remain[0]>0)
	{
		cout<<"Yes";
		return;
	}
	for(ll i=1;i<=m/2;i++)
	{
		if(remain[i]>0&&remain[m-i]>0)
		{
//			cout << i << " ";
//			cout << remain[i] << " " << remain[m-i] <<endl;
			cout<<"Yes"<<endl;
			return;
		}
		else
		{
			if(m%2==0&&remain[m/2]%2==0)
			{
				cout<<"Yes"<<endl;
				return;
			}
		}
	}
	cout<<"No"<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
