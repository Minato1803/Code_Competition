//
#include <bits/stdc++.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixced<<setprecision(x)

//====================================================================================================

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll n;
	cin>>n;
	ll tmp = n/3,remain = n%3;
	if(n==3)
		cout<<"1 1 1";
	else 
	{
		if(remain!=0)
		{
			if(tmp%3!=0)
				cout<<tmp<<" "<<tmp<<" "<<tmp+remain;
			else
				cout<<tmp-1<<" "<<tmp+1<<" "<<tmp+remain;	
		}
		else
			if(tmp%3!=0)
				for(ll i=0;i<3;i++) cout<<tmp<<" ";
			else
				cout<<tmp-1<<" "<<tmp-1<<" "<<tmp+2;
	}	
	return 0;
}
