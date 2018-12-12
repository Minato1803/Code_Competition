#include <iostream>
#include <string.h>
using namespace std;

void doixung()
{  char *a=new char [10000];
   cin>>a;
   if(strlen(a)==1){cout<<"YES"<<endl;return;}
   for(int i=0; i<strlen(a);i++){
        if(a[i]!=a[strlen(a)-i-1]){cout<<"NO"<<endl; return;}
          }
        cout<<"YES"<<endl;
		delete[] a;}
int main()
{ long n;
  cin>>n;
  for(int i=0;i<n;i++){
     doixung();}
  return 0; 
}
