#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll s=0;
	if(n%2==0){
		cout<<n/2;
	}
	else cout<<-1*(n+1)/2;
	return 0;
}
