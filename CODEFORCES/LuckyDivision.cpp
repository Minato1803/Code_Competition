#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll a[]= {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	for(ll i=0;i<14;i++){
		if(n>=a[i]&&n%a[i]==0){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
