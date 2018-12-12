#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{ 
	ll n;
  	cin>>n;
  	if(n==0)
  	{
  		cout<<"no"; 
		return 0;
  	}
  	while(n>0)
  	{
		if(n%7==0||n%11==0)
  		{
  			cout<<"yes";
  			return 0;
		}
		else
		{
			if(n<7)
			{
				cout<<"no"; 
				return 0;
			}
			n-=7;
		}
		
	}
//   	else cout<<"no";
   return 0;	  
	  }
