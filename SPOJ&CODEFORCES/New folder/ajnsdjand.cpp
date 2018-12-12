#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin>>n;
	for(ll i=0;i<n;i++){
	
vector<pair<ll,ll> >a;
	ll s=0,o=0;
for(ll i=0;i<4;i++)
	{
		ll x,y;cin>>x>>y;a.push_back(make_pair(x,y));
	}
	sort(a.begin(),a.end());

for(ll i=0;i<4-1;i++)
	{ 
	for(ll j=i+1;j<4;j++)
	{
		if(a[i].first==a[j].first||a[i].first==a[j].first)
		 {
		break;
	
		}
		if(a[i].first==a[j].first) s++;
		if(a[j].second==a[j].second) o++;
		
			
	}
}
if(s==2||o==2) cout<<"YES";
else cout<<"NO";
}
return 0;
}
