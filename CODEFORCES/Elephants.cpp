#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	if(n<=5){
		cout<<"1";
		return 0;
	}
	if(n%5==0){
		cout<<n/5;
	}
	else
	 cout<<n/5+1;
	return 0;
}
