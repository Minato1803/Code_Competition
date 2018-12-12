#include <iostream>
using namespace std;
void sapxepnoibot(int a[],int n)
{ for(int i=0; i<n; i++)
  for(int j=n-1;j>i;j--){
if(a[j-1]>a[j]){ swap(a[j-1],a[j]);}
}}

int main()
{ int n;
  cin>>n;
  int *a = new int[n];
   for(int i=0; i<n; i++){
      cin>>a[i];}
  	sapxepnoibot(a,n);
for(int i=0;i<n;i++){
	cout<<a[i]<<endl;
}
  delete[] a;
  return 0;
}
