#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll count=0, tmp;
	tmp= m-a[0];
	if(tmp>0){
			cout<<count<<" ";
		}
		if(tmp==0){
			cout<<"1 ";
		}
		if(tmp==0){
			cout<<a[0]/m<<" ";
			tmp=(a[0]/m)*m-a[0];}
	for(ll i=1;i<n;i++){
		count=0;
		if(tmp>0){
			tmp-=a[i];
			if(tmp>0){
				cout<<count<<" ";
				continue;
			}
			if(tmp==0){
				cout<<count+1<<" ";
				continue;
			}
			if(tmp<0){
				tmp+=a[i];
				a[i]-=tmp;
				count+=1;
			}
		}	
		tmp=m-a[i];
			if(tmp>0){
			cout<<count<<" ";
		}
		if(tmp==0){
			cout<<count+1<<" ";
		}
		if(tmp<0){
		cout<<count+a[i]/m<<" ";
		tmp=(a[i]/m)*m-a[i];}
	}	
	return 0;
}
