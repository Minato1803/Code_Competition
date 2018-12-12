#include <iostream>
using namespace std;
 
int abs(int a)
{
	if (a<0)
	return -a;
	return a;
}
 
void nhapmang(int **a, int sohang, int socot)
{
	for (int i = 0; i < sohang+2; i++)
		for (int j = 0; j < socot+2; j++)
		if (i == 0 || i == sohang+1 || j == 0 || j == socot + 1)
		a[i][j]=0;
		else
		cin>>a[i][j];
}
 
 
long long Phia_Trong(int **a,int sohang, int socot)
{   long long Sp=0;
	for(int i=0;i<sohang+1;i++){                  //so mat thua o hang doc
		for(int j=0;j<socot+2;j++){					//2
			Sp+=abs(a[i][j]-a[i+1][j]);
		}
	}
	for(int i=0;i<sohang+2;i++){                  //so mat thua o hang ngang
		for(int j=0;j<socot+1;j++){
			Sp+=abs(a[i][j]-a[i][j+1]);
		}
	}
	return Sp;
	
}
int main()
{
	int sohang, socot;
	cin>>sohang>>socot;
	int **mang = new int*[sohang+2];
	for (int i = 0; i < sohang+2; i++)
		mang[i] = new int[socot+2];
	
	nhapmang(mang,sohang,socot);
	cout<<Phia_Trong(mang,sohang,socot)+(sohang*socot);
	return 0;
}
