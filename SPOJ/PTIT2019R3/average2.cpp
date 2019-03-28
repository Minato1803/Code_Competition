#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<ll, ll> b[100005];
priority_queue<ll> que;
ll a[100005];
 
int main() {
	ll n;
  	cin>>n;  
  	for (int i = 1; i <= n; ++i) 
  	{
    	cin>>a[i];
  	}
	for (int i = 1; i <= n; ++i)
	{    
    	b[i].first = (b[i - 1].first + a[i]);
    	b[i].second = i;
  	}
  std::sort(b, b + n + 1);
  ll it = n - 1, ans = 0;
  while (it >= 0) {
    que.push(b[it + 1].second);
    ll idx = que.top();
    if (idx > b[it].second && idx - b[it].second > ans)
      ans = idx - b[it].second;
    --it;
  }
  printf("%d", ans);
}
