#include <iostream>
#include <string.h>
using namespace std;

int main()
{  char a[10000];
   long dem=0;
    cin>>a;
  for(int i=0; i<=strlen(a); i++){
  	if(a[i]=='o'||a[i]=='O'){dem+=1;}
  }
  cout<<dem;
   return 0;
}
