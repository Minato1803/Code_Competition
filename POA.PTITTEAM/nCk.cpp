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

ll factor[1000005];
ll mu(ll a,ll x){
	if(x==0)return 1;
	if(x&1){
		return a*mu(a,x-1)%1000000007;
	}
	else{
		ll t=mu(a,x/2);
		return t*t%1000000007;
	}
}

//ll gcd_extend(ll a, ll b, ll *x, ll *y) {
//  if (b == 0) {
//    *x = 1;
//    *y = 0;
//    return a;
//  }
//  ll x1, y1;
//  ll gcd = gcd_extend(b, a%b,  &x1, &y1);
//  *x = y1;
//  *y = x1 - (a / b) * y1;
//  return gcd;
//}
//
//ll modulo_inverse_euclidean(ll n, ll m) {
//  ll x, y;
//  if (gcd_extend(n, m, &x, &y) != 1) return -1; // not exist
//  return (x % m  + m) % m;
//}
void fact()
{
	factor[0]= 1;
	for(ll i=1;i<=1000000;i++)
		factor[i]=(factor[i-1]*i)%mod107;
	
}

int main()
{
//	Input;
	fact();
	ll q;
	scanf("%lld",&q);
	ll k,n;
	for(ll i=0;i<q;i++)
	{
		scanf("%lld %lld",&k,&n);
		ll b= factor[n]%1000000007;
		ll a= (factor[k]*factor[n-k])%1000000007;
		printf("%lld\n",(b*mu(a,1000000005))%1000000007);
//		printf("%lld\n",(b*modulo_inverse_euclidean(a,1000000007))%1000000007);
//		cout<<endl;
	} 
	return 0;
}
    
