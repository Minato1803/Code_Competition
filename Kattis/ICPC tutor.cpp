//
#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define db              double
#define fix_set(x)      fixed<<setprecision(x)
#define buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input			freopen("input.in", "r", stdin)
#define output			freopen("output.out", "w", stdout)

//====================================================================================================
ll m;

bool pows(ll a,ll b)
{
	ll s=1;
	for(ll i=1;i<=b;i++)
	{
		s*=a;
//		cout<<a<<endl;
		if(s>m)
		{
			cout<<"TLE"<<endl;
			return 1;
		}
	}
	return 0;
}

void Solves()
{
 	ll n,t;
	cin>>m>>n>>t;
	ll fact=1;
 	switch (t)
 	{
 		case 1:
 			for(ll i=n;i>=1;i--)
 			{
 				if(fact>m)
 				{
 					cout<<"TLE"<<endl;
 					return;
				}
				fact*=i;
			}
			break;
		case 2:
			if(pows(2,n))
			{
				return;
			}
				
			break;
		case 3:
			if(pows(n,4))
			{
				return;
			}
			break;
		case 4:
			if(pows(n,3))
			{
				return;
			}
			break;
		case 5:
			if(pows(n,2))
			{	
				return;
			}
			break;
		case 6:
			if((n*log2(n))>m)
			{
				cout<<"TLE"<<endl;
				return;
			}
			break;
		case 7:
			if(n>m)
			{
				cout<<"TLE"<<endl;
				return;
			}
			break;										
	}
	cout<<"AC"<<endl;
}

int main()
{
	buff;
//  input; output;
	Solves();
    return 0;
}
