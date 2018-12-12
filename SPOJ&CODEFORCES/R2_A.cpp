#include<iostream>
using namespace std;
#define ll long long
bool sosanh(ll b, ll c){
	if(b%2==0&&c%2!=0){ return 1;}
	if(b%2==0&&c%2==0&&c<b){ return 1;}
	if(b%2!=0&&c%2!=0&&c>b){ return 1;}
	return 0;
}

ll sort(ll a[], ll n)
{
	for(ll i=0;i<n-1;i++){
		for(ll j=i+1;j<n;j++){
			if(sosanh(a[i],a[j])==1){
				swap(a[i],a[j]);
			}
		}
	}
	for(ll i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main()
{
	ll n;
	cin>>n;
	ll *a= new ll[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, n);
	delete[] a;
	return 0; 
}
