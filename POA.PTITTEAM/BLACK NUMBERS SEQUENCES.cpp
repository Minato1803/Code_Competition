#include <iostream>
#include <string.h>
using namespace std;

int main()
{ int dem5=0, dem1=0;
	char *a= new char [511511];
  cin>>a;
  for(int i=0; i<strlen(a);i++){
  	if(a[i]=='1'){ dem1+=1;}
	if(a[i]=='5'){dem5+=1;}
  }
 cout<<dem1<<" "<<dem5;
 delete[] a;
 return 0; 
}
