#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll congdon(ll a[][3],ll i,ll j)
{
			if(i==0){
				if(j==0){ return (a[i][j]+a[i][j+1]+a[i+1][j]);}
				if(j>0&&j<2){ return (a[i][j]+a[i][j+1]+a[i+1][j]+a[i][j-1]);}
				if(j==2){ return (a[i][j]+a[i+1][j]+a[i][j-1]);}
				}
			if(i>0&&i<2){
				if(j==0){ return (a[i][j]+a[i][j+1]+a[i+1][j]+a[i-1][j]);}
				if(j>0&&j<2){ return (a[i][j]+a[i][j+1]+a[i+1][j]+a[i][j-1]+a[i-1][j]);}
				if(j==2){ return (a[i][j]+a[i+1][j]+a[i][j-1]+a[i-1][j]);}
				}
			if(i==2){
				if(j==0){ return (a[i][j]+a[i][j+1]+a[i-1][j]);}
				if(j>0&&j<2){ return (a[i][j]+a[i][j+1]+a[i-1][j]+a[i][j-1]);}
				if(j==2){ return (a[i][j]+a[i-1][j]+a[i][j-1]);}
				}	
}
	// de em lam lai bang dau loang, tai em van bi mac vai cho chua lam duoc

void xuat(ll a[][3])
{
	ll b[3][3];
	for(ll i=0;i<3;i++){
		for(ll j=0;j<3;j++){
			b[i][j]=congdon(a,i,j);}
	}
	for(ll i=0;i<3;i++){
		for(ll j=0;j<3;j++){
			if(b[i][j]==0){
				cout<<"1";
				continue;
			}
			if(b[i][j]%2!=0||b[i][j]==1){
				cout<<"0";
			}
				else cout<<"1";
		}
		cout<<endl;
	}
}

int main()
{
	ll a[3][3];
	for(ll i=0;i<3;i++){
		for(ll j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	xuat(a);
	return 0;
}
