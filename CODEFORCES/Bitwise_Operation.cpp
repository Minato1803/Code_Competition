#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll a=1,b=2;
	cout<<"hoan doi 2 so\n";
	a=a^b; //01+10=11
	b=a^b; //11+10=01					//hoan doi 2 so
	a=a^b; //11+01=10
		cout<<a<<" "<<b;
		cout<<endl;
// ===============================================================		
		
		cout<<"Chuyen ki tu th�nh ki tu thuong:\n";
	cout<<(char) ('a' | ' ')<<" "<<(char) ('A' | ' ')<<endl ;
//==================================================================	 
	
	cout<<"Chuyen ki tu th�nh chu in hoa:\n";
	cout<<(char) ('a' & '_')<<" "<<(char) ('A' & '_')<<endl;
//====================================================================	 
	
	cout<<"doi ki tu hoa thanh thuong\n";
	
	cout<<(char) ('a' ^ ' ')<<" "<<(char) ('A' ^ ' ')<<endl;
//=====================================================================	 
	
	//tim vi tri ca ki tu trong bang chu cai
	cout<<"vi tri trong bang chu cai\n";
	cout<<('C' & '?')<<endl;
	cout<<('Z' ^ '@')<<endl;
//=====================================================================

//Tim so lon nhat:
//	 max = ~(1 << 31);
//	ll	 max = (1 << 31) - 1;
	 ll max = (1 << -1) - 1;
	cout<<"max= "<<max<<endl;
//======================================================================
//Nh�n n voi 2:

	//n << 1; // n*2

//Chia cho 2:

	//n >> 1; // n/2

//Nh�n n voi 2^m:

	//n << m;

//Chia n cho 2^m:
	//n >> m;

//Kiem tra n l� so le:
	//(n & 1) == 1;

//Gi� tri tuyet doi cua 1 so:
	//(n ^ (n >> 31)) - (n >> 31);

//gi� tri lon nhat trong 2 so a v� b:

	ll maxab = b & ((a-b) >> 31) | a & (~(a-b) >> 31);
	cout<<maxab<<endl;
	
//Tim gi� tri nho nhat trong 2 so a v� b:

	ll minab=a & ((a-b) >> 31) | b & (~(a-b) >> 31);
	cout<<minab<<endl;

//Kiem tra x v� y c� c�ng dau hay kh�ng:
		//(x ^ y) >= 0;

//T�nh 2^n:
	//2 <<(n-1);

//Kiem tra xem n c� phai giai thua cua 2 hay kh�ng:
	ll n=3;
	n > 0?(n & (n - 1)) == 0: false;
	return 0;
}
	

