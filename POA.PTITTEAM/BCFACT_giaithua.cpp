#include <iostream>
using namespace std;

void fact(int a[], int i)
{ long long s=1;
for(int j=2; j<=a[i];j++){
    s=s*j;
      }
cout<<s<<endl;
}

int main()
{ int n,i=0, dem=0;
  int *a= new int[100];
  a[i]=0;
 loop: cin>>n;
      //for(int i=0; i<dem;i++){
	    //if(n==a[i]){goto loop;}}
 while(n!=0){
     a[i]=n;
     ++i; dem+=1;
	 goto loop;}
 for(int i=0;i<dem;i++){fact(a,i);}
  delete[] a;
  return 0; 
}
