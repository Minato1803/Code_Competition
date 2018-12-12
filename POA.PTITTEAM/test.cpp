#include <iostream>
using namespace std;

void tonguoc(int a[], int i)
{ int s=0;
for(int j=1; j<=a[i];j++){
    if(a[i]%j==0){ s+=j;}
      }
cout<<s<<endl;
}

int main()
{ int n;
  cin>>n;
  int *a= new int[n];
  for(int i=0; i<n; i++){
  	cin>>a[i];
  }
  for(int i=0;i<n;i++){
  	tonguoc(a,i);
  }
  delete[] a;
  return 0;
}
