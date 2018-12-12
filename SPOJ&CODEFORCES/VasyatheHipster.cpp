#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll red,blue;
	cin>>red>>blue;
	if(red>=blue)
	{
		cout<<blue<<" ";
		red -=blue; 
		cout<<red/2;
	}
	else
	{
		cout<<red<<" ";
		blue -=red; 
		cout<<blue/2;
	}
	return 0;
}
