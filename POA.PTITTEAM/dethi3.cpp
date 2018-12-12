#include <iostream>
#include <math.h>
// include them headers khac neu can ...
using namespace std;
// Cau 1:(2 diem)
int F(unsigned x)
// F(x) dung de kiem tra xem x co phai la so doi xung hay khong.
// vi du x = 151: F(x) se tra ve gia tri TRUE (1).
// YEU CAU: Ham F(x) co 1 lenh bi sai vi tri, hay sua lai cho dung.
{	int t = x;
	int rv = 0;
	while (t != 0)
	{	int r = t % 10;
	    rv *= 10;
		rv += r;	
		t  /= 10;
	} 
	return (rv == x); 
}
// Cau 2:(3 diem)
float S(int n)
// YEU CAU: hay tinh S(n)= 1 + 1/3^3 + 1/5^5 + ... + 1/(2n+1)^(2n+1), voi  n < 100
{	// cac lenh cua ham ...
	float Sn=0;
	for(float i=1;i<=n;i++){
		Sn+=1.0/pow(i,i);
		++i;
	}
	return Sn;
}
// Cau 3:(2 diem)
unsigned long K(unsigned long x)
// YEU CAU: x la so co n ky so a1a2..an, K(x) tra ve so  an..a2a1 la so dao nguoc cua x.
// vi du: x = 12345 : K(x) = 54321
{	// cac lenh cua ham ...
	int S=0;
		while(x!=0){
			int d=x%10;
			S*=10;
			S+=d;
			x/=10;
		}
	return S;
	}		
	
// Cau 4:(3 diem)
void P123(unsigned A[ ], unsigned &n1, unsigned &n2, unsigned &n3)
// YEU CAU: viet ham P123 tim so n1 va n2 trong mang A[] co 10 so nguyen duong
// sao cho n3=(n1+n2) co gia tri nho nhat
{	// cac lenh cua ham ...
	int S=0, x,y; n3=A[1]+A[2];   
		for(int i=0;i<10;i++){
			for(int j=9;j>i;j--){
					S=A[i]+A[j];
					x=A[i]; y=A[j];
			}
			if(S<=n3){ n3=S; n1=x;n2=y;}
				
		}
}


// ham main() chi de ho tro viet chuong trinh, khong tinh diem
int main()
{	unsigned A[10];
	cout <<"\n\r F(151) = " << F(151);
	cout <<"\n\r S(5) = " << S(5);
	cout <<"\n\r K(12345) = "<< K(12345)<<endl;
	for(int i=0;i<10;i++){cout << "A["<<i<<"]="; cin >> A[i];}
	unsigned N1=0,N2=0,N3=0;
	P123(A,N1,N2,N3);
	cout <<"\n\r N1= "<<N1<<" N2="<<N2<<" N3="<<N3;
	return 0;
}

