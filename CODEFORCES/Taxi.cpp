#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll s[n];
	ll a=0,b=0,c=0,d=0;
	for(ll i=0;i<n;i++){
		cin>>s[i];
		if(s[i]==1){
			a+=1;
		}
		if(s[i]==2){
			b+=1;
		}
		if(s[i]==3){
			c+=1;
		}
		if(s[i]==4){
			d+=1;
		}
	}
	ll count= d+b/2+c;
	if(c>0||a>0){
		if(a>c){
			a-=c;
		}
		else{
			a=0;
		}
	}
	count+=a/4;
	a=a%4;
	b=b%2*2+a;
	if(b>4){
		count+=2;
	}
	else if(b>0){
		count+=1;
	}
	cout<<count;
	return 0;
}
