#include <iostream>
// include them headers khac neu can ...
using namespace std;
// Cau 1 (2 diem)
int F(unsigned x)
// bien x la so co 3 ky so, x=abc. F(x) dung de kiem tra: x == a! + b! + c! ?
// vi du x = 145: 145 = 1! + 4! + 5!, F(x) se tra ve gia tri TRUE (1).
// YEUCAU: Ham F(x) dang co 1 lenh bi sai (khong dung vi tri), hay sua lai cho dung.
{	long j = x, so = 0;
	while (j!=0)
	{	long k = 1;
		int a = j % 10; j /= 10;
		for(int i=1; i<=a; i++) k *=i ;
		so += k;
	}
	if (so==x) return 1; // dung
	return 0; // sai
}
// Cau 2: (3 diem) 
float S(int n)
// YEU CAU: hay tinh S(n)= 1 + 1/2! + 1/3! + ... + 1/n!, voi  n < 20
{	// cac lenh cua ham ...
	float sn=1;
	loop:long k = 1;
		for(int i=1; i<=n; i++){ k *=i ;}
		sn += 1.0/k;
		if(n>1){n-=1; goto loop;}
	return sn;	
}
// Cau 3: (2 diem)
unsigned K(unsigned x)
// x la so co 3 ky so x=abc. 
// YEU CAU: Hay viet ham K(x) sap xep lai cac ky so cua x de tao thanh so lon nhat 
// vi du: x = 253, K(x) = 532
{	// cac lenh cua ham ...
  unsigned *a= new unsigned[3];
  for(int i=0; i<3;i++){
  	int d=x%10;
  	    x/=10;
  	a[i]=d;
  }
  for(int i=2; i>0;i--){
  	for(int j=0;j<i;j++){
  	if(a[i]>a[j]){swap(a[i],a[j]);}
              }
     }
     unsigned s=a[0]*100+a[1]*10+a[2];
     return s;
}
// Cau 4: (3 diem)
void P123(unsigned A[ ], unsigned &n1, unsigned &n2, unsigned &n3)
// YEU CAU: Hay viet ham P123 tim 3 so n1, n2, n3 la 3 so lon nhat, nhi, ba 
// trong mang A[ ] chua 10 so nguyen duong.
{
n1=A[0];n2=A[1];n3=A[2];
	for (int i=0; i<10;i++){
	 if(A[i]>n1)
		n1=A[i];}	
		if(n1==n2) n2=A[0];		
    for (int i=0; i<10;i++){
	if(A[i]!=n1&&A[i]<n1&&A[i]>n2)
	  	n2=A[i];} 	
		  if(n3==n1||n3==n2)n3=A[3];
		  if(n3==n1||n3==n2)n3=A[4];  	
    for (int i=0; i<10;i++){
	  if(A[i]!=n1&&A[i]!=n2&&A[i]<n1&&A[i]<n2&&A[i]>n3)
	  	n3=A[i];}
	// cac lenh cua ham ...
}


// ham main() chi de ho tro viet chuong trinh, khong tinh diem
int main()
{	unsigned A[10];
	cout <<"\n\r F(145) = " << F(145);
	cout <<"\n\r S(5) = " << S(5);
	cout <<"\n\r K(253) = "<< K(253)<<endl;
	for(int i=0;i<10;i++){cout << "A["<<i<<"]="; cin >> A[i];}
	unsigned N1=0,N2=0,N3=0;
	P123(A,N1,N2,N3);
	cout <<"\n\r N1= "<<N1<<" N2="<<N2<<" N3="<<N3;
	return 0;
}

