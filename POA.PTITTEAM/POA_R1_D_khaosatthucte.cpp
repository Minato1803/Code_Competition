#include <iostream>
using namespace std;

void kt(int a[], int N)
{ int dem=0;
  for(int i=0; i<N; i++){
	cin>>a[i];
 }
  for(int i=0; i<N; i++){
  	if(a[i]==0){dem+=1;}
  }
  cout<<dem;
}
int main()
{ int N;
   cin>>N;
   if(N==0){return 0;}
   int *a= new int [N];
   kt(a,N);
   delete[] a;
   return 0;
}
