	#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	map <string,ll> user;	
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		string tmp;
		cin>>tmp;
		if(user[tmp]!=0)
		{
			cout<<tmp<<user[tmp]<<endl;
			user[tmp]++;
		}
		else
		{
			user[tmp]=1;
			cout<<"OK"<<endl;
		}	
	}
	return 0;
}
