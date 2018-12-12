#include <bits/stdc++.h>
using namespace std;
#define ll long long

void xep(ll s[], ll n,ll m,ll A[])
{
	ll max=0; ll  pt, tmp=n;ll count=0,i=1;
	loop: for(i=1;i<m;i++){
			if(A[i]!=1){ count+=1;}
				else {
					if(count>max){
						max=count; pt=i-1;}
					count=0; continue;	
				}	
	}
		tmp+=1;
		if(A[pt-count/2]==0){
		A[pt-count/2]=1;
		s[tmp]=pt-count/2;
		goto loop;}
	 		else return;
	
}

int main()
{
	ll  m,n,q,b;
	cin>>m>>n>>q;
	ll A[m];
	ll a[n];
	ll s[m];
	for(ll i=0;i<=m;i++){
		A[i]=0;
	}
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		s[i]=a[i];
		A[a[i]]=1;
	}
	xep(s,n,m,A);
	for(ll i=0;i<q;i++){
		cin>>b;
		cout<<a[b]<<endl;
	}
}
