#include <iostream>
using namespace std;
int main()
{
	int a[10],vitri[10],tanso[10],giatri[10],max,dem,xh,end;
	for (int i=0;i<10;i++)
	cin>>a[i];
	max=a[0];
	for (int i=1;i<10;i++)
	{
		if (max<a[i])
		max=a[i];
	}
	for (int i=0;i<10;i++)
	{
		if (a[i]==max)
			dem++;
	}
	for (int i=0;i<10;i++)
	{
		if (a[i]==max)
		vitri[i]=i;
		else
		vitri[i]=-1;
	}
	cout<<"max: "<<max<<endl;
	cout<<"Vi tri: ";
	for (int i=0;i<10;i++)
	if (vitri[i]!=-1)
	cout<<vitri[i]<<" ";
	cout<<endl<<"---------------------------"<<endl;

	for (int i=0;i<10;i++)										//tao bang chua tan so cua cac so trong bang a
		{
		dem=0;
		for (int j=0;j<10;j++)
		if (a[i]==a[j])
		dem++;
		tanso[i]=dem;
		}
	max=tanso[0];
	for (int i=1;i<10;i++)										//tim tan so cao nhat
	{
		if (max<tanso[i])
		max=tanso[i];
	}
	for (int i=0;i<10;i++)										//save lai vi tri cua cac so co tan so cao nhat, cac so con lai thi ghi -1
	{
		if (tanso[i]==max)
			vitri[i]=i;
		else vitri[i]=-1;			

	}
	for (int i=0;i<10;i++)										//*****
	{
	xh=0;			//xuat hien
	end=i;
		for (int j=0;j<=end;j++)
		{
		if (vitri[i]!=-1 && a[j]==a[i])
	 	xh++;
	 	}
	 	if (xh==1 && vitri[i]!=-1)
		giatri[i]=a[i];											//loc ra cac so khac nhau co tan so lon nhat
	 	else giatri[i]=-1;}

	for (int i=0;i<10;i++)
	{
	if (giatri[i]!=-1)
	{
	cout<<"So "<<giatri[i]<<" xuat hien "<<max<<" lan"<<" o vi tri:";
	for (int j=0;j<10;j++)
	if (a[j]==giatri[i])
	cout<<vitri[j]<<" ";
	cout<<endl;
	}
}
	return 0;
}
