#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll check(ll x,ll y,ll min,ll w,ll b)
{
	if(x==2)
	{
		if(y==2) return min*2;
		if (y==1) return b;
		else return w;	
	}	
	
	if(x==0)
	{
		if(y==1) return -1;
		if(y==2) return w;
	}
	if(x==1)
	{
		if(y==0) return -1;
		if(y==2) return b;
	}		
		
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,w,b;
	cin>>n>>w>>b;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll cost=0,min;
	if(w>=b){
		min=b;
	}
	else
	{
	 min=w;
	}
	if(n%2==0)
	{
		for(ll i=0;i<n/2;i++)
		{
				if(check(a[i],a[n-1-i],min,w,b)==-1)
				{
					cout<<-1;
					return 0;
				}
				if(a[i]!=a[n-1-i]||a[i]==2)
				cost+=check(a[i],a[n-1-i],min,w,b);
				
		}
		
	}
	else
	{
		if(a[n/2]==2)
		{
			cost+=min;
//			cout<<cost<<endl;
		}
		for(ll i=0;i<n/2;i++)
		{
				if(check(a[i],a[n-1-i],min,w,b)==-1)
				{
					cout<<-1;
					return 0;
				}
				if(a[i]!=a[n-1-i]||a[i]==2)
				cost+=check(a[i],a[n-1-i],min,w,b);
//				cout<<check(a[i],a[n-1-i],min,w,b)<<" ";
		}
//		cout<<endl;
	}
	cout<<cost;
	return 0;
}
