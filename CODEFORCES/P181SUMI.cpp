#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll chiada(ll a[])
{
	ll max=0,pt=0,count=0;
	for(ll i=0;i<14;i++){
		if(max<=a[i]) {max=a[i]; pt=i;}	
	}
	while (max>0){
		if(pt==13&&max>0){
			pt=0;
			a[pt]+=1; max-=1;
		}
		if(pt!=13&&max>0){
			pt+=1;
			a[pt]+=1; max-=1;}
	}
	for(ll i=0;i<14;i++){
		if(a[i]%2==0){
			count+=a[i];
		}
	}
	return count;
	
}


int main()
{
	ll *a= new ll[20];
	for(ll i=0;i<14;i++){
		cin>>a[i];
	}
	cout<<chiada(a);
	return 0;
}
