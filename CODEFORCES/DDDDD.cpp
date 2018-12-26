#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll s=(n+1)*n/2;
	ll ss;
	if(s%2==0){
		s=s/2;
		cout<<0<<endl;
	}
	else
	{
		s=s/2+1;
		cout<<1<<endl;
	 }
	vector<ll>a;
 
	for(ll i=1;i<=s;i++)
	{
		if(s>n){
		s-=i;
		a.push_back(i);
		}
		else
		{
		 a.push_back(s);
		 break;
		}
	}
	cout<<a.size()<<" ";
	for(ll i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
