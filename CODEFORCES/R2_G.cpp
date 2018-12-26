#include<iostream>
#include <vector>
#include <string.h>
using namespace std;
#define ll long long

void CF(ll **a)
{  
	vector <ll> fr;
	
	
}

int main()
{
 	ll n,m;
 	cin>>n>>m;
 	ll **a= new ll *[2];
	for(int i=0; i<2;i++){
		a[i] = new ll[2];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
}
