#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db long double
#define  Input        	freopen("input.txt", "r", stdin)
#define  Output			freopen("output.txt", "w", stdout)


void nCk(ll n,ll k)
{
	db s=1;
	for(db i=n;i>n-9;i--)
	{
		s*=(i/k);
//		cout<<s<<endl;
		k--;
	}
	cout<<fixed<<setprecision(0)<<s;
//	cout<<(ll) s;
}


int main()
{
//	Input;
//	Output;
	ll n;
	cin>>n;
	ll count=0;
	for(ll i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		if(a==2)
		{
			count+=1;
		}
	}
	if(count>=9){
		nCk(count,9);
	}
	else cout<<"0";
	return 0; 
}
