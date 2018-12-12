#include <iostream>
#include <math.h>
using namespace std;
bool kt(int N)
{ for(int j=2;j<=sqrt(N);j++){
		if(N%j==0){return false ;}	
		}
	return true;	
		}

int main()
{ int N;
cin>>N;
if(N<=1){cout<<"NO";}
if(N==2){cout<<"YES";}
if(N>=3){
    if(kt(N)==1){cout<<"YES";}
    else cout<<"NO";
}
return 0;
}
