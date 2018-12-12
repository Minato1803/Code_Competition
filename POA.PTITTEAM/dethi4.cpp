#include <iostream>
#include <math.h>
// include them headers khac neu can ...
using namespace std;
// Cau 1:(2 diem)
unsigned long F(unsigned x)
// F(x) la ham chuyen so thap phan x thanh so thap phan b dien ta mot so nhi phan 
// tuong duong voi x. Vi du: x = 9, F(x) = b = 1001.
// YEU CAU: Ham F(x) co 1 lenh bi sai vi tri, hay sua lai cho dung.
{	unsigned long b = 0; 
	unsigned int base = 1, r;
	while(x>0)	
	{	r = x % 2; 
		b += r*base;
		base *= 10; 
		x /= 2;
	}
	return b; 
}
// Cau 2:(3 diem)
float S(float a, unsigned n)
// YEU CAU: lap trinh tinh S(a,n)= 1 + 1/a + 1/a^2 + 1/a^3 +...+ 1/a^n, voi n<100,a>0
{	// cac lenh cua ham ...
	float Sn=0;
	for(int i=0;i<=n;i++){
		Sn+=1.0/pow(a,i);
	}
	return Sn;
}
// Cau 3:(2 diem)
unsigned long K(unsigned x)
// YEU CAU: x la so co n ky so a1a2..an, lap trinh tinh K(x)=a1^n + a2^n +...+ an^n
// vi du: x = 123, K(x) = 1^3 + 2^3 + 3^3 = 36
{	// cac lenh cua ham ...
	unsigned Sn=0,i=0;
	unsigned *a= new unsigned [255];
	while(x!=0){
		int d=x%10;
		a[i]=d;
		x/=10;
		i++;
	}
	for(int j=0;j<i;j++){
		Sn+=pow(a[j],i);
	}
	return Sn; 	
}
// Cau 4:(3 diem)
void P123(unsigned A[ ], unsigned &n1, unsigned &n2, unsigned &n3)
// YEU CAU: viet ham P123 tim vi tri bat dau (n1) va ket thuc (n2) cua mot day so khong giam, va dai nhat trong mang A[] co 10 so nguyen duong. n3 la so phan tu cua day nay. 
// vd: A = 1,2,3,4,3,6,7,1,8,0 : n1=0, n2=3, n3=4 (day so la 1,2,3,4)
{	// cac lenh cua ham ...
    int dodai=1;
    n3=1;n1=0; n2=0;
	for(int i=0;i<9;i++){
		if(A[i]<=A[i+1]){
			dodai+=1;
			if(dodai>n3) {
				n3=dodai;
		        n1=i-dodai;
				if(i<dodai){n1=0;}	
			    n2=i+1;
		    }
		}
		else dodai=1;
   }
}
// ham main() chi de ho tro viet chuong trinh, khong tinh diem
int main()
{	unsigned A[10];
	cout <<"\n\r F(9) = " << F(9);
	cout <<"\n\r S(2,5) = " << S(2,5);
	cout <<"\n\r K(123) = "<< K(123)<<endl;
	for(int i=0;i<10;i++){cout << "A["<<i<<"]="; cin >> A[i];}
	unsigned N1=0,N2=0,N3=0;
	P123(A,N1,N2,N3);
	cout <<"\n\r N1= "<<N1<<" N2="<<N2<<" N3="<<N3;
	return 0;
}

