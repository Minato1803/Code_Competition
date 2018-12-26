#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		if(i%2!=0){
			if(i>=3){
				cout<<"that ";
			}
			cout<<"I hate ";
		}
		else
		{
			cout<<"that I love ";
		}
	}
	cout<<"it";
	return 0;
}
