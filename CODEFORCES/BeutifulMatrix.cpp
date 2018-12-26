#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll a[5][5];
	ll row,col;
	for(ll i=0;i<5;i++){
		for(ll j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				row=i;
				col=j;
			}
		}
	}
	ll count=0;
	if(row>=2){
		count+=(row-2);
			
	}
	else{
		count+=(2-row);
		}

	if(col>=2){
		count+=(col-2);
	}
	else count+=(2-col);
	cout<<count;
	return 0;
}
