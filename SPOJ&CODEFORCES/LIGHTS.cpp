#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> e[252];
bool a[252];
 
void dfs(ll u) {
  if (a[u]==1) return;
  a[u] = 1;
  for (ll i = 0; i<e[u].size();i++)
    dfs(e[u][i]);  
}

int main()
{
	ll n,m;
	cin>>n>>m;
	ll u,v,count=0;
	for(ll i=0;i<m;i++){
		cin>>u>>v;
		e[u].push_back(v);
		e[v].push_back(u);
	}
	dfs(1);
	ll cnt=0;
	for(ll i=0;i<n;i++){
		cnt+=!a[i];
		if(!a[i]){
			count+=1;
		}
	}
	if(!cnt) cout<<0;
	cout<<count;
	return 0;
}
