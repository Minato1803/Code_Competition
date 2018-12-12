#include<iostream>
#include <vector>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
#define ll long long

char intToChar(int a)
{
	char result = a + 48;
	return result;
}

int charToInt(char a)
{
	int result = (int) a - 48;
	return result;
}

ll tinh( string a)
{  ll Sn=0, S=0, k=0;
loop: for(ll i=k; i<a.length();i++){
		if(a[i]!='+'||a[i]!='-'||a[i]!='*'||a[i]!='/'){
			S = S*10+charToInt(a[i]);
		}
		else {
		 k=i; break;}
}
	if(a[k]=='+'){
		Sn+=S;
	}
	if(a[k]=='-'){
		Sn-=S;
	}
	if(a[k]=='*'){
		Sn*=S;
	}
	if(a[k]=='/'){
		Sn/=S;
	}
	if(k<a.length()-1){
			S=0;
			goto loop;	
	}
	return Sn;
}
	

int main()
{
	ll n;
	cin>>n;
	string a;
	cin>>a;	
	cout<<tinh(a);
}
