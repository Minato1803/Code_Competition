#include<bits/stdc++.h> 
using namespace std; 
#define ll long long

ll N;

ll brent(ll N)
{
	if(N%2==0)
		return 2;
	ll x = rand()%(N-1)+1;
	ll y=x;	
	ll c = rand()%(N-1)+1;
	ll g=1;
	while(g==1)
	{
		x= ((x*x)%N+c)%N;
		y= ((y*y)%N+c)%N;
		y= ((y*y)%N+c)%N;
		g = __gcd(abs(x-y),N);
		cout<<x<<" "<<y<<" "<<c<<" "<<g<<endl;
		
	}	
	return g;
}

int main()
{
	cin>>N;
	cout<<brent(N);
	return 0;
}
