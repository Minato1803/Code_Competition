#include <iostream>
using namespace std;

void chuyen(int a[], int n, int k)
{
	for(int i=0;i<k;i++){
		for(int j=n-1; j>0;j--){
			swap(a[j],a[j-1]);
		}
	}
	for(int i=0; i<n;i++){
		cout<<a[i];
	}
}

int main()
{
	int n,k;
	cin>>n;
	int *a= new int[n];
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	chuyen(a,n,k);
	delete[] a;
	return 0;
}

