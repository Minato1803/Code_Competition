#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll x,ll n)
{
	return (n==0)? x:gcd(n, x%n); 
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	vector <ll> fst;
	vector <ll> snd;
	if(n<=2)
	{
		cout<<"No";
		return 0;
	}
	ll a=0,b=0;
	for(ll i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			a+=i;
			fst.push_back(i);
		}
		else
		{
			
			b+=i;
			snd.push_back(i);
		}
	}
	while(gcd(a,b)==1)
	{
		for(ll i=n;i>n/2;i--)
		{
			b-=i;
			snd.pop_back();
			fst.push_back(i);
			a+=i;
		}
	}
	if(gcd(a,b)>1)
	{
	  cout<<"Yes"<<endl;
	  cout<<fst.size()<<" ";
	  for(ll i=0 ;i<fst.size();i++)
	  {
	  	cout<<fst[i]<<" ";
	  }
	  cout<<endl;
	  cout<<snd.size()<<" ";
	  for(ll i=0 ;i<snd.size();i++)
	  {
	  	cout<<snd[i]<<" ";
	  }
	}
	else cout<<"No";
	return 0;
}
