#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll nghichdaomod(ll a)
{
  for (ll i=1;i<1000000007;i++){
    if((a*i)% 1000000007 == 1){
      return i;
    }
  }
}

ll fact(ll a)
{ ll s=1;
for(ll j=2; j<=a;j++){
    s=(s*j)%1000000007;
      }
	return s;
}

int main()
{
	ll q;
	cin>>q;
	ll k,n;
	loop: cin>>k>>n;
	ll a= nghichdaomod((fact(k)*fact(n-k))%1000000007);
	cout<<(fact(n)*a)%1000000007<<endl;
	if(q>1){q-=1;goto loop;}
	return 0;
}
