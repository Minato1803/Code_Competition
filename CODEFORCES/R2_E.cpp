#include<iostream>
#include <vector>
#include <string.h>
using namespace std;
#define ll long long

void sosanh(ll a[],ll b[], ll i,ll n)
{ int st=0;
  ll end=n;
  int find=0;
  while(st<=end){
  	ll F=(st+end)/2;
  	if(b[i]==a[F]){
  		cout<<"Yes"<<endl; return;
	  }
	if(b[i]<a[F]){ end=F-1; }
		else st=F+1;  
  }
  cout<<"No"<<endl;
	
}

int main()
{
	ll Q,n;
	cin>>Q>>n;
	ll *a = new ll[n];
	ll *b = new ll[Q];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=0;i<Q;i++){
		cin>>b[i];
	}
	for(ll i=0;i<Q;i++){
		sosanh(a,b,i,n);
	}
	delete[] a;
	delete[] b;
	return 0;
}
