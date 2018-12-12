//
#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define db              double
#define fix_set(x)      fixed<<setprecision(x)
#define buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input			freopen("input.txt", "r", stdin)
#define output			freopen("output.txt", "w", stdout)

//====================================================================================================

void Solves()
{
 	ll p,sum;
 	while()
 	{
		
		cin>>p;
		cout<<p<<" ";
		sum=1;
		 for(ll i=2;i<=sqrt(p);i++)
 		{
 			if(p%i==0)
 				sum=sum+i+p/i;
		}
		
		ll result = sum-p;
		
		if(result>2||result<0)
		{
			cout<<"not perfect"<<endl;
			return;
		}
		if(result<=2&&result>0)
		{
			cout<<"almost perfect"<<endl;
			return;
		}
		if(result==0)
		{
			cout<<"perfect"<<endl;
			return;
		}
	}
}

int main()
{
    buff;
//    input; 
//		output;
	Solves();
    return 0;
}
