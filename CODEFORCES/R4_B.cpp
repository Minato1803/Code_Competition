#include<iostream>
#include <vector>
#include <string.h>
using namespace std;
#define ll long long
#define max 1000000000

bool ktt[max];

void kt(ll i, ll L, ll R)
{
	
}

void songt(ll L, ll R)
{	ll *a= new ll[R];
	ll j=0, count=0;
	for(ll i=L;i<=R;i++){
		if(ktt[i]==0){
			count+=1;
			a[j]= i;
			kt(i,L,R);
			j+=1;
		}
	}
	cout<<count<<endl;
	for(int i=0;i<j;i++){
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
