#include <iostream>
#include <string.h>
using namespace std;

int main()
{ int n;
	char *a= new char [511];
  cin>>a;
  n=strlen(a);
  for(int i=0;i<strlen(a);i++){
  	 if(a[i]=='5'&&a[i+1]=='1'&&a[i+2]=='1'){ cout<<"yes"; return 0;}
      }
      if(a[n-1]=='5'&&a[0]=='1'&&a[1]=='1'){ cout<<"yes"; return 0;}
      if(a[n-2]=='5'&&a[n-1]=='1'&&a[0]=='1'){ cout<<"yes"; return 0;}
      cout<<"no";
    delete[] a;
    return 0;
  }
