#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,m;
	cin>>n>>m;
	ll count=1;
	loop:
		if(count%2!=0){
			for(ll i=0;i<m;i++){
			cout<<"#";
			}
			cout<<endl;
		}
		if(count%4==0){
			
			cout<<"#";	
			for(ll i=0;i<m-1;i++){
			cout<<".";
			}
			cout<<endl;
		}
		else
			if(count%2==0){
			for(ll i=0;i<m-1;i++){
			cout<<".";
			}
			cout<<"#"<<endl;
			
			}
	if(count<n){
		count+=1;
		goto loop;
	}
	return 0;
}
