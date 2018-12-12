#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================
ll a[1000005]={0};
map <ll,ll> ele;
ll maxx,maxpos=100000,elemaxx=1;
set <ll> num;

void Solves()
{
	ll n,tmp;
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++)
	{
		scanf("%lld",&tmp);
		num.insert(tmp);
		ele[tmp]++;
		if(a[tmp]==0)
			a[tmp]=i;
	}
	for(set<ll>::iterator it=num.begin(); it!=num.end(); ++it)
	{
//		if(ele[i]==0) continue;
		if(ele[*it]>elemaxx||(ele[*it]==elemaxx&&maxpos>a[*it]))
		{
			elemaxx=ele[*it];
			maxx=*it;	
			maxpos=a[*it];
		}
	}
	printf("%lld ", maxx);
}

int main()
{
//    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
    
