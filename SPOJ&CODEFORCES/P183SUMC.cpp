#include <bits/stdc++.h>
using namespace std;
#define ll long long

void xau(string a, ll n)
{
	ll count=0,dem=0;
	if(a.length()==3){cout<<"3"; return;}
	ll dau=0;
	for(ll i=0;i<a.length();i++){
		if(a[i]=='1'){count+=1;}
		if(count==3){dau=i+1; break;}
	}
	ll cuoi=0;
	for(ll i=a.length()-1;i>=0;i--){
		if(a[i]=='1'){dem+=1;}
		if(dem==3){cuoi=n-i; break;}
	}
	if(dau>=cuoi){
		cout<<dau;}
		else cout<<cuoi;	
	}

int main()
{
	ll n,count=0;
	cin>>n;
	string a;
	cin>>a;
	xau(a,n);
	return 0; 
	
}
