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
ll n,k;
vector < pair<ll,ll> > t;
map <ll,ll> Count;
ll ans,tmp;

bool check(ll num)
{
	ll sum = 0;
	ll slot = 0;
	ll len = t.size();
	for(ll i=0;i<min(k,len);i++)
	{
		sum += t[i].first;
		slot += t[i].first/num;
		if(min(t[i].first,sum/k)>=num && slot >= k)
		{
			ans = i;
			return 1;
		}
	}
	return 0;
}

void Solves()
{
	cin>>n>>k;
	for(ll i=0;i<n;i++)
	{
		ll index;
		cin>>index;
		Count[index]++;		
	}
	for(map<ll,ll>::iterator it=Count.begin(); it!=Count.end(); ++it)
	{
		t.push_back(make_pair(it->second, it->first));
	}
	sort(t.rbegin(), t.rend());
	
	ll l=1, r=200000, mid;
	while(l <= r)
	{
		mid=(l+r)/2;
		if(check(mid))
		{
			l = mid+1;
			tmp=mid;
		}
		else
		{
			r = mid-1;
			mid = tmp;
		}
	}
//	cout<<mid<<" "<<ans<<endl;
	for(ll i=0;i<=ans;i++)
	{
		for(ll j=1;j<=t[i].first/tmp;j++)
		{
			cout<<t[i].second<<" ";
			k--;
			if(k==0)
				return;
		}
	}
//	for(ll i=0;i<t.size();i++)
//	{
//		cout<<t[i].second<<"\t"<<t[i].first<<endl;
//	}
//	ll maxx = t[0].first / k;
//	ll pos = k;
//	for(ll i=0;i<k;i++)
//	{
//		if(maxx > t[i].first)
//		{
//			pos = i;
//			break;
//		}	
//	}
//	for(ll i=0 ; i<pos;i++)
//		cout<<t[i].second<<" ";
//	for( ll i=0;i<k-pos-2;i++)
//		cout<<t[0].second<<" ";



}


int main()
{
    buff;
    //Input;
//    Output;
    Solves();
    return 0;
}
