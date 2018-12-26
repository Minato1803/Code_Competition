#include<iostream>
#include <vector>
#include <string.h>
#include <math.h>
using namespace std;
#define ll long long
#define max 1000000005
bool ktt[max];

void kt(ll L, ll R)
{
	for(ll i=L;i<=R;i++) {
		ktt[i]=0;
	}
	for(ll i=2;i<=R;i++){
		if(ktt[i]==1)continue;
		for(ll j=i*2;j<=R;j+=i){
			ktt[j]=1;}	
	}

}

void songt(ll L, ll R)
{	ll *a= new ll[R];
	ll j=0;
		kt(L,R);
	for(ll i=L;i<=R;i++){
		if(ktt[i]==0){
			a[j]= i;
			j+=1;
		}
	}
	cout<<j<<endl;
	for(ll i=0;i<j;i++){
		cout<<a[i]<<" ";
	}
}

int main()
{
	ll L,R;
	cin>>L>>R;
	songt(L,R);
	return 0;	
}
