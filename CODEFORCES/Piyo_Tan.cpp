#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll N,K;
	cin>>N>>K;
	ll count=0,j=N;
	
	if(N==1){
		cout<<0;
	}
		for(ll i=K;i<N;i++){
			for(ll j=N;j>i;j--){
				if(i!=0&&j%i>=K){count+=1;}
				}
			count+=(N-i);
		}	
	cout<<count;
	return 0;	
}
