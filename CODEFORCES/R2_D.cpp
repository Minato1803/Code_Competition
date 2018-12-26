#include<iostream>
#include <string.h>
using namespace std;
#define ll long long

int main()
{
	string xau;
	cin>>xau;
	if(xau.length()==1){ cout<<"Yes"; return 0;}
	for(int i=0;i<xau.length()/2;i++){
		if(xau[i]!=xau[xau.length()-1-i]){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0; 
}
