#include <bits/stdc++.h>
using namespace std;
#define ll long long
void bbsort(ll a[])
{
	for (ll i=0;i<3;i++){
        for(ll j=2;j>i;j--){
		if(a[j-1]>a[j]){
         		swap(a[j-1], a[j]);}
		}
	}
	for(ll i=0;i<3;i++){
		cout<<a[i]<<" ";
	}
}

int main()
{
	ll *a= new ll[5];
	for(ll i=0;i<3;i++){
		cin>>a[i];
	}
	bbsort(a);
	cout<<(a[2]-a[1])+(a[1]-a[0]);
	delete[] a;
	return 0;
}
