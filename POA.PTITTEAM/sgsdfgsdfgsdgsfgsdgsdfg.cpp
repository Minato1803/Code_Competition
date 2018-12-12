#include <iostream>
using namespace std;

//tinh dien tich mat ben cua 2 cot ke nhau
long S_ab(long a, long b)
{
	if (a>b)
	return a-b;
	else
	return b-a;
}


//tinh tong dien tich nhin thay duoc do su chenh lech cua 2 cot
long long S_nhinthay(long** a, int m, int n)
{
	long long S=0;
	for (int i = 0; i < m + 1; i++)				//doc
		for (int j = 0; j < n + 1; j++)
		{
			S+=S_ab(a[i][j],a[i][j+1]) +S_ab(a[i][j],a[i+1][j]);
		}

	return S;
}

int main()
{
	int hang,cot,loai=0;
	cin>>hang>>cot;
	long** luoinen = new long*[cot+2];
    for(int i = 0; i < cot+2; i++)
        luoinen[i] = new long[hang+2];
    for (int i = 0; i < hang+2; i++)
			for( int j = 0; j < cot+2; j++)
			if  ( i == 0 || j == 0 || j == cot+1 || i == hang+1)
				luoinen[i][j]=0;
			else
			cin>>luoinen[i][j];


	int S_tren=hang*cot;			//dien tich nhin tu tren xuong
	long long tongdientich = S_tren + S_nhinthay(luoinen,hang,cot);
	cout<<tongdientich;
	for(int i = 0; i < cot; i++)
    {
        delete[] luoinen[i];
    }

    delete[] luoinen;
	return 0;
}

