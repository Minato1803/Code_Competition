#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,a;
	cin>>n;
	a=n/2;
	if(a%2==0&&(n-a)%2==0){
		a-=1;
		cout<<a<<" "<<n-a;
		return 0;
	}
	if(a%2!=0&&(n-a)==a){
		a-=2;
		cout<<a<<" "<<n-a;
		return 0;
	}
	cout<<a<<" "<<n-a;
	return 0;
}
