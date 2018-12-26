#include<iostream>
using namespace std;

void ucln(long long a,long long b)
{ long long d;
    while(b!=0){
        d=a%b;
        a=b;
        b=d;
    }
    cout<<a;
}

int main()
{
	long long a,b;
	cin>>a>>b;
	ucln(a,b);
	return 0;
}

