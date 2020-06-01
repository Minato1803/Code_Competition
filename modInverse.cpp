
#include <bits/stdc++.h> 
#define ll long long
using namespace std;  
ll modInverse(ll a, ll m) 
{ 
    ll m0 = m; 
    ll y = 0, x = 1; 
  
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
        // q is quotient 
        ll q = a / m; 
        ll t = m; 
  
        // m is remainder now, process same as 
        // Euclid's algo 
        m = a % m, a = t; 
        t = y; 
  
        // Update y and x 
        y = x - q * y; 
        x = t; 
    } 
  
    // Make x positive 
    if (x < 0) 
       x += m0; 
  
    return x; 
} 
  
// Driver program to test above function 
int main() 
{ 
	ll m = 100000000003;
	ll a= 0; 
	for(ll i = 0;i<=1000;i++)
    {
		a = i; 
		for(ll j=0;j<=1000;j++)
		{
			ll b= j;
//			cout<<b<<"/"<<a<<endl;
			ll d = ((b%m)* (modInverse(a, m))%m) %m;
			if(d == 14500000001)
			{
    			printf("Modular multiplicative inverse is %lld\n", 
        		d);
        		cout<<b<<" "<<a<<endl;
			}
		} 
	}
  
    return 0; 
}
