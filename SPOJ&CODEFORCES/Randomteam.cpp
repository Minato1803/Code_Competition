//
#include <bits/stdc++.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixced<<setprecision(x)

//====================================================================================================


ll fact(ll a)
{ 
	ll s=1;
	for(ll j=a-2+1; j<=a;j++)
	{
    	s=(s*j);
    }
	return s;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll n,m;
	cin>>n>>m;
	ll max = 1,min = 1;
	ll pairs = n-m+1;
	if(pairs==1)
	{
		cout<<0<<" "<<0;
		return 0;
	}
	if(pairs==2)
	{
		cout<<min<<" "<<max;
	}
	else
	{
		max = fact(pairs)/2;
		if(n%m==0)
		{
			pairs = n/m;
			min = (fact(pairs)/2)*m;
		}
		else
		{
			pairs = 2*m;
			if(pairs>=n)
			{
				min = m-(pairs-n);
		    }
		    else
		    {
		    	n-=2*m;
				pairs = 2;
		    	while (n>m)
		    	{
		    		pairs++;
		    		n-=m;
				}
				ll tmp=0;
				if(n<m)
				{
					tmp=m-n;
					pairs++;
				}
//				cout<<pairs<<endl;
				min= (fact(pairs)/2)*(m-tmp)+(fact(pairs-1)/2)*tmp;
				
			}
		}
		
		cout<<min<<" "<<max;	
	}	
	
		
	return 0;
}
