#include<iostream>
using namespace std;
#define ll long long
ll pw(ll t)
{   ll p=0;
	for(int i=1;i<=t;i++){
		if(i%2!=0){ p+=6*13; }
		 else p+=13*13;
}
	return p;	
}

int main()
{
	ll t;
	cin>>t;
	cout<<pw(t);
	return 0;
}
