#include <iostream>
#include <math.h>
using namespace std;
#define ll long long


ll ams(ll a[], ll count,ll Sn)
{
	for(int i=0;i<count;i++){
		ll k=a[i];
		for(int j=1;j<count;j++){
			k*=a[i];
		}
			Sn-=k;
	}
	if(Sn==0) return 1;
		else return 0;
}

int main()
{
	ll n,Sn,count=0;
	cin>>n;
	Sn=n;
	ll *a= new ll[n];
	while(n!=0){
		a[count]=n%10;
		count+=1;
		n/=10;
	}
	cout<<ams(a,count,Sn);
	return 0;
	
}
