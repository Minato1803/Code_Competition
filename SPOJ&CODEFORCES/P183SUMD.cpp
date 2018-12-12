#include <bits/stdc++.h>
using namespace std;
#define ll long long

void DiChuyen(int n, int i, int j,ll k)
{
   while (k>0){
   		if (n==1&&k>0){
     		cout<<i<<" "<<j<<" 0";
   		}	 
  		else { 
   			DiChuyen(n-1,i,6-i-j,k); 
   			DiChuyen(1,i,j,k); 
   			DiChuyen(n-1,6-i-j,j,k); 
  		}
  		k-=1;
	}
	cout<<i<<" "<<j;
}

int main()
{
	ll n,k;
	cin>>n>>k;
	DiChuyen(n,1,2,k);
	return 0;  
}
