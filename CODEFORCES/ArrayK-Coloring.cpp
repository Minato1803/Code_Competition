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
ll n,k;
map <ll,ll> Count;
//-----------------------------

void Solves()
{
	cin>>n>>k;
	ll a[n+5];
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		Count[a[i]]++;
	}
	for(ll i=1;i<=Count.size();i++)
	{
		if(Count[i]!=0&&i>k)
		{
			cout<<"YES"<<endl;
			goto continues;
		}
	}
		cout<<"NO"<<endl;
		return;
	continues:
	for(ll i=1;i<=n;i+=k)
	{
		ll tmp=1;
		for(ll j=i;j<k+i;j++)
		{
			if(j>n)
				break;
			cout<<tmp<<" ";
			tmp++;
		}
//		cout<<endl;
	}
}

int main()
{
    buff;
    Input;
//    Output;
    Solves();
    return 0;
}
