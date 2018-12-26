#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dem(string a,ll k)
{
	ll m=0,l=0, count=0,max=0;
	for(ll i=0;i<a.length();i++){
		if(a[i]=='a'){m+=1;}
			else l+=1; 
	}
	if(m==a.length()||l==a.length()){ return a.length();}
	if(m>=l){
		for(ll i=0;i<a.length();i++){
			if(a[i]=='b'&&(a[i+1]=='a'||a[i-1]=='a')&&k>0){a[i]='a'; k-=1;}
		}
		for(ll i=0;i<a.length();i++){
			if(a[i]=='a'){count+=1;}
				else{
					if(max<count){max=count;}
				}
		}
		return max;
	}
		else{
			for(ll i=0;i<a.length();i++){
				if(a[i]=='a'&&(a[i+1]=='b'||a[i-1]=='b')&&k>0){a[i]='b'; k-=1;}
			}
			for(ll i=0;i<a.length();i++){
				if(a[i]=='a'){count+=1;}
					else{
					if(max<count){max=count;}
				}
			}
			return max;
		}
}

int main()
{
	ll n, k;
	cin>>n>>k;
	string a;
	cin>>a;
	cout<<dem(a,k);
	return 0;	
}
