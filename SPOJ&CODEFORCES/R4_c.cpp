#include<iostream>
#include <vector>
#include <string.h>
using namespace std;
#define ll long long

ll dem(string a, string b)
{	
	ll count=0;
	string tmp;
	loop:	if(b.length()>=a.length()){
				tmp= b.substr(0,a.length());}
			else{
				return count;}
	if(tmp==a){
		count+=1;
		b.erase(0,1);
		tmp.erase(0);
		goto loop; 
	}
	 else {
	 	b.erase(0,1);
	 	tmp.erase(0);
	 	goto loop;}
	return count;
}

int main()
{
	string a;
	string b;
	cin>>a>>b;
	cout<<dem(a,b);
	return 0;
}
