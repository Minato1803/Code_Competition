#include <iostream>
using namespace std;

long long F(long n)
{  
	if(n<2)
	return 1;
	if (n>=2){
		for(int i=2;i<=n;i++){
			return (F(n-1)+F(n-2))%1000000007;
		}
	}
}
int main()
{
	long n;
	cin>>n;
cout<<F(n);
return 0;
}
