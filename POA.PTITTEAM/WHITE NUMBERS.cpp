#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	long long d=n;
		if(d<7){cout<<d; return 0;}
		if(d>=73) { n-=(d-d%73)/73; }
		n-=(d-d%7)/7;
		if(d>=511) { n+=(d-d%511)/511; }
	cout<<n;	
	return 0;
}
