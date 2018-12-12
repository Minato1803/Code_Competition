#include<iostream>
using namespace std;

int bit(int n)
{   int *a=new int[1000];
	int r,s=0;
	loop:int i=0, dem=0, d=n; 
		while(d>0)	
		{	r = d % 2;
			a[i]=r;  
			d /= 2;
			i++;
		}
		for(int j=0;j<i;j++){
			if(a[j]==1){ dem+=1; }
		}
		if(dem==5){ s+=1; }
		if(n>0) { n-=1;goto loop; }
delete[] a;		
return s;
}

int main()
{ 
	int n;
	cin>>n;
	cout<<bit(n);
	return 0;
}
