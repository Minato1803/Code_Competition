#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll runtime(ll N, ll t[],ll h[])
{
	for(ll i=0;i<N;i++){
		for(ll j=N-1;j>i;j--){
			if(t[j-1]>t[j]){
				swap(t[j-1], t[j]);
				swap(h[j-1], h[j]);
			}
		}
	}
	
	ll time=0,dem=0,pt=0;
	for(ll i=0;i<N;i++){
		if(t[i]==h[i]){
			time=t[i];pt=i;
			dem=1;
			break;
		}
	}
	for(ll i=0;i<N;i++){
		if(i==pt&&pt!=0){
			continue;}
		if(time+t[i]<=h[i]){
			time+=t[i];
			dem+=1;
		}
	}
	return dem;
}

int main()
{
	ll N;
	cin>>N;
	ll *t = new ll[N];
	ll *h= new ll[N];
	for(ll i=0;i<N;i++){
		cin>>t[i]>>h[i];
	}
	cout<<runtime(N,t,h);
	delete[] t;
	delete[] h;
	return 0;
}
