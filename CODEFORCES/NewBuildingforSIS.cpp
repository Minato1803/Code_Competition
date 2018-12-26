#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,h,a,b,k;
	cin>>n>>h>>a>>b>>k;
	ll col1,row1,col2,row2;
	for(ll i=0;i<k;i++){
		ll count=0;
		cin>>col1>>row1>>col2>>row2;
		if(col1==col2){
			if(row1>=row2){
				cout<<row1-row2<<endl;
				continue;
			}
			else{
				cout<<row2-row1<<endl;
				continue;
				}
		}
			if(row1>b){
				count+=(row1-b);
				row1 = b;
			}
			else if(row1<=b&&row1>a){
					if((b-row1)<(row1-a)){
						count+=(b-row1);
						row1 = b;}
						else{
							count+=(row1-a);
							row1 = a;}
					}
				else if(row1<=a){
						count+=(a-row1);
						row1 = a;
						}
			
			if(col2>col1){
					count+=(col2-col1);}
			else count+=(col1-col2);
			
				if(row1>=row2){
					count+=(row1-row2);
				}
				else{
					count+=(row2-row1);
					}
			
//			if(row2>b){
//				count+=(row2-b);
//				row2 = b;
//			}
//			else if(row2<=b&&row2>a){
//				if((b-row2)<(row2-a)){
//					count+=(b-row2);
//					row2 = b;}
//					else{
//						count+=(row2-a);
//						row2 = a;}
//			}
//			else if(row2<=a){
//				count+=(a-row2);
//			}
			cout<<count<<endl;
	}
}
