#include <iostream>
using namespace std;

long long F(long n)
{
   	if(n<2)
	return 1;
    long long F0=1,F1=1,F;
    for (long i=2; i<=n; i++)
    {
        F=(F0+F1)%1000000007;
        F0=F1;
        F1=F;
    }
    return F;
}
 
int main()
{
    long n;
	cin>>n;
    cout<<F(n);
    return 0;
}
