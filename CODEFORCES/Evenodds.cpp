#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	ll n,k;
	cin>>n>>k;
	if(n%2==0){
		if(k<=n/2){
			ll count=n-1-2*(n/2-k);
			cout<<count;
			return 0;
		}
		else{
			ll count=k-(n/2);
			cout<<count*2;
			return 0;
		}
	}
	else {
		if(k<=n/2+1){
			ll count=n-2*((n/2+1)-k);
			cout<<count;
			return 0;
		}
		else{
			ll count=k-(n/2+1);
			cout<<count*2;
			return 0;
		}
	}
	return 0;
}
