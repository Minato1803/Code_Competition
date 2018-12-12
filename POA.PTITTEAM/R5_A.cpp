#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll nghichdaomod(ll a, ll m)
{
  for (ll i=1;i<m;i++){
    if((a*i)% m == 1){
      return i;
    }
  }
}

ll fact(ll n,ll m)
{ 	ll s=1;
		for(ll i=2; i<=n;i++){
    			s=(s*i)%m;
      		}
	return s;
}
//ko hieu tai sao bai nay tinh gia thua no bi sai luon @@
// mo tab moi lam lai y chang thi dung

int main()
{
	ll q, m=103;
	ll k,n;
	for(ll i=0;i<q;i++){
		cin>>k>>n;
		ll a= nghichdaomod((fact(k,m)*fact(n-k,m))%m,m);
		cout<<(fact(n,m)*a)%m;
	}
	return 0;
}


