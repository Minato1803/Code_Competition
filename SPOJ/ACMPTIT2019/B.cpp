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
map<ll,ll> Count;
//----------------------------
ll factor(ll a)
{
	ll result= a*(a-1);
	return result/2;
	
}

void Solves()
{
	cin>>n>>m;
	ll a;
	ll result=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a;
		Count[a]++;
	}
	for(ll i=0;i<=m/2;i++)
	{
		if(m%2==0&&i==m/2)
		{
			result+=factor(Count[i]);
			break;
		}
		result+=(Count[i]*Count[m-i]);
	}
	cout<<result<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
