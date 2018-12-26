#include <iostream>
using namespace std;
#define 	ll		 long long
#define  	mod107	 1000000007;
ll a[1000005];
void fact()
{
	a[0]= 1;
	for(ll i=1;i<=1000000;i++)
		a[i]=(a[i-1]*i)%mod107;
	
}

int main()
{  
	fact();
	ll m;
	cin>>m;
	for(ll i=0;i<m;i++){
    	ll n;
    	cin>>n;
    	cout<<a[n]<<endl;
	}	
	return 0;	
}
