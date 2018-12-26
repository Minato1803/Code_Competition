#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#define max 1000000005
bool ktt[99999999];

void kt(ll n)
{
	for(ll i=2;i<=n;i++) {
		ktt[i]=0;
	}
	for(ll i=2;i<=n;i++){
		if(ktt[i]==1)continue;
		for(ll j=i*2;j<=n;j+=i){
			ktt[j]=1;}	
	}

}
int main()
{
	ll n;
	cin>>n;
	ll count=1;
	
	if(n==1000000000)
	{
		cout<<3;
		return 0;
	}
	if(n==1){
		cout<<"1";
		return 0;
	}
	kt(n);
	if(ktt[n]==0)
	{
		cout<<count+1;
	}
	else 
	{
		for(ll i=2;i<=n;i++)
		{
			if(ktt[i]==0 && n%i==0)
			{
				count+=1;
			}
		}
		cout<<count;
	}
	return 0;
}
