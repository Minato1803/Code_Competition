#include <iostream>
using namespace std;
#define ll long long

ll n,m,c[100005],w[100005],x[100005];
ll xopt[100005], fopt=0, weight=0, cost=0;

void Input()
{
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
	{
		cin>>w[i]>>c[i];		
	}
}

void Update()
{
	if(cost>fopt&&weight<=m)
	{
//		for(ll i=1;i<=n;i++)
//			xopt[i]=x[i];
		fopt = cost;	
	}
}

void BrandAndBound(ll i)
{
//	ll t = (b-weight)/w[i];
	if(weight>m) return;
	if(i>n)
	{
		Update();
		return;
	}
	for(ll j=1;j>=0;j--)
	{
		x[i] = j;
		weight+=w[i]*x[i];
		cost+=c[i]*x[i];
//		else
	//	if(cost+c[i+1]>fopt) 
			BrandAndBound(i+1);
		weight-=w[i]*x[i];
		cost-=c[i]*x[i];	
	}
}

int main()
{
	Input();
	BrandAndBound(1);
	cout<<fopt<<endl;
}
