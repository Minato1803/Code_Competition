#include <iostream>
#include<math.h>
// include them headers khac neu can ...
using namespace std;
// Cau 1: (2 diem)
int F(unsigned x)
// F(x) dung de kiem tra so x co phai la 1 so Fibonacy Fn = Fn-1 + Fn-2 ?
// vi du x=5=2+3: F(x) se tra ve gia tri TRUE (1).
// YEU CAU: Ham F(x) dang co 1 lenh bi sai vi tri, can phai sua lai cho dung.
{	long t=1, y=0, z=0;
	while (y < x)
	{	y = z + t;	
		t = z;
		z = y;	 
	} 
	if (y==x) return 1; 
	return 0;
}
// Cau 2: (3 diem)
float S(int n)
// YEU CAU: Hay lap trinh de tinh S(n) = 1 - 1/2 + 1/3 - 1/4 + … +(-1)^(n-1)*1/n
{// cac lenh cua ham ...
float Sn=0;
for (int i=1;i<=n;i++){
	Sn+=pow(-1.0,i-1)*1.0/i;
              }
    return Sn;          
}
// Cau 3:(2 diem)
unsigned long K(unsigned long x)
// YEU CAU: x la so co n ky so x=a1a2..an, K(x) se tra ve gia tri a1 + a2 +...+ an
// vi du: x = 253, K(x) = 2 + 5 + 3 = 10
{	// cac lenh cua ham ...
    long S=0;
    while(x!=0){
    	int d=x%10;
    	    x/=10;
    	    S+=d;
    	    }
   return S; 	    
}
// Cau 4:(3 diem)
void P123 (unsigned int  A[ ], unsigned int &n1, unsigned int  &n2, unsigned int &n3)
// YEU CAU: viet ham P123 tim 2 so n1, n2 trong mang A[] co 10 so nguyen duong, 
// sao cho n1 > n2, va n3=(n1-n2) co gia tri nho nhat.
{	// cac lenh cua ham ...
   n3=A[2];
   unsigned int S=0,x,y;
   for(int i=0;i<10;i++){
   		for(int j=9;j>i;j--){
   			if(A[i]!=A[j]&&A[i]>A[j]){ 
		       	n1=A[i]; n2=A[j];}
		       	else {n1=A[j]; n2=A[i];}
		       	S=n1-n2;x=n1;y=n2;
			   		}
			if(S<n3){n3=S;n1=x;n2=y;}	
		}
   }
   



// ham main() chi de ho tro viet chuong trinh, khong tinh diem
int main()
{	unsigned int  A[10];
	cout <<"\n\r F(5) = " << F(5);
	cout <<"\n\r S(5) = " << S(5);
	cout <<"\n\r K(253) = "<< K(253)<<endl;
	for(int i=0;i<10;i++){cout << "A["<<i<<"]="; cin >> A[i];}
	unsigned int N1=0,N2=0,N3=0;
	P123(A,N1,N2,N3);
	cout <<"\n\r N1= "<<N1<<" N2="<<N2<<" N3="<<N3;
	return 0;
}

