#include<iostream>
using namespace std;

int Kiemtra(int n)
{
   
	for(int i=1; i<n; i++)
	{
	   int dem=0;
	   for(int j=1; j<=i; j++)
	   {
	   	if(i%j==0) dem++;
	   }	
	   if(dem==2)
	  {
		cout<<i<<" ";
	  }
	}
}

int main()
{
	int n;
	cin>>n;
    Kiemtra(n);
	return 0;		
}
