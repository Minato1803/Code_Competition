#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll modulo_combination(ll n, ll k, ll m) {
  ll a = 1, b = 1, c=1;
  for (ll i=2; i <= n; i++) {
    a = (a * i) % m;
  }
  for (ll i=2; i <= n-k; i++) {
    b = (b * i) % m;
  }
  for (ll i=2; i <= k; i++) {
    c = (c * i) % m;
  }
  b = ( b * c) % m;
  return ( a * modulo_inverse_euclidean(b, m)) % m;
}

ll modulo_inverse_euclidean(ll n, ll m) {
  ll x, y;
  if (gcd_extend(n, m, &x, &y) != 1) return -1; // not exist
  return (x % m  + m) % m; // v? x có th? âm 
}

int main()
{
	ll q,m=103;
	ll k,n;
	
	for(ll i=0;i<q;i++){
		cin>>k>>n;
		cout<<modulo_combination(n,k,m);
	}
	return 0;
}
