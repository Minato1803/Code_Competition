#include <bits/stdc++.h>
using namespace std;
#define ll signed long long

int main()
{
	ll s[205][205];
	ll a[5],b[5];
	ll rp,rt,dp,dt;
	cin>>a[0]>>b[0];
	a[0]+=100;
	b[0]+=100;
	for(ll i=0;i<205;i++){
		for(ll j=0;j<205;j++){
			s[i][j]=0;
		}
	}
	for(ll i=1;i<4;i++){
		cin>>a[i]>>b[i];
		a[i]+=100;b[i]+=100;
		if(a[i]==a[0]){
			if(b[i]>b[0]){rp=b[i];rt=b[0];}
				else{ rp=b[0];rt=b[i];}
		}
		if(b[i]==b[0]){
			if(a[i]>a[0]){dp=a[i];dt=a[0];}
				else{ dp=a[0];dt=a[i];}
		}
	}
		for(ll i=rt;i<=rp;i++){
			for(ll j=dt;j<=dp;j++){
				s[i][j]=1;
			}
		}
	for(ll i=0;i<4;i++){
		cin>>a[i]>>b[i];
		a[i]+=100;b[i]+=100;
	}
		if(a[0]==a[2]){
			if(b[0]>b[2]){ rt=b[2]; rp=b[0];}
			else { rt=b[0]; rp=b[2];}
			if(a[1]>a[3]){ dt=a[3]; dp=a[1];}
			else { dt=a[1]; dp=a[3];}
			for(ll i=rt;i<=rp;i++){
				if(s[i][a[0]]==1){ cout<<"Yes"; return 0; }
			}
			for(ll i=dt;i<=dp;i++){
				if(s[b[1]][i]==1){ cout<<"Yes"; return 0; }
			}
		}
		if(a[1]==a[3]){
			if(b[1]>b[3]){ rt=b[3]; rp=b[1];}
			else { rt=b[1]; rp=b[3];}
			if(a[0]>a[2]){ dt=a[2]; dp=a[0];}
			else { dt=a[0]; dp=a[2];}
			for(ll i=rt;i<=rp;i++){
				if(s[i][a[1]]==1){ cout<<"Yes"; return 0; }
			}
			for(ll i=dt;i<=dp;i++){
				if(s[b[0]][i]==1){ cout<<"Yes"; return 0; }
			}
		}
		cout<<"No";
	return 0;
}
