#include<iostream>
using namespace std;

int abs(int a)
{
	if (a<0)
	return -a;
	return a;
}

long long son(int **a,int n,int m)
{   long long S=0;
	for(int i=0;i<m;i++){					//son tu tren xuong
		for(int j=0;j<n-1;j++){
			if(j==0){S+=a[j][i];}			//son het vien tren 
			if(j==n-2){S+=a[n-1][i];}		//son het vien duoi
			if(i==0){S+=a[j][i];}			//son vien ngoai ben trai den n-2
			if(i==m-1){S+=a[j][i];}			//son vien ngoai ben phai den n-2
			S+=abs(a[j][i]-a[j+1][i]);
		}
	}
												 //son tu trai qua phai
	for(int i=0;i<n;i++){					
		for(int j=0;j<m-1;j++){
			if(i==n-1&&j==m-2){S+=a[i][j+1];}	 //son goc duoi cung ben phai
			if(i==n-1&&j==0){S+=a[i][j];}		 //son goc duoi cung ben trai
			S+=abs(a[i][j]-a[i][j+1]);
		}
	}
	return S;
}

int main()
{
	int n, m;
	cin>>n>>m;
	int **a= new int *[m];				//tao mang dong 2 chieu
	for(int i=0;i<m;i++){
		a[i]=new int[n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cout<<son(a,n,m)+(n*m);
	for(int i=0;i<m;i++){
        delete[] a[i];
    }
    delete[] a;
    return 0;
	
}
