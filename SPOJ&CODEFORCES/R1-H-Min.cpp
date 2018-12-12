#include <iostream>
using namespace std;

void solanxh(long a[], long n)
{   int m=a[0];
	for(int i=0; i<n;i++){
		if(m>a[i]){
			m=a[i];
		}
	}
    long count = 0;
	for (int i = 0; i < n; i++){
		if (m == a[i]){
			count++;
	    }

	}
	cout<<m<<" "<<count;
}

int main()
{   long n;
    cin >> n;
    long *a= new long [n];
	for (int i = 0; i<n; i++){
		cin >> a[i];
	}
	
	solanxh(a,n);
	delete[] a;
	return 0;
}
