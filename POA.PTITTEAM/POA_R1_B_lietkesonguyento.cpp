#include <iostream>
#include<math.h>
#define ll long long
using namespace std;
bool kt(ll L, ll i)
{ 
	  for(ll j=2;j<i;j++){
		  if(i%j==0){return false ;}	
		   }
	   return true;	
}

void songt(ll L, ll R)
{
	ll *a= new ll[R];
	ll j=0;
	for(ll i=L; i<=R;i++){
		if(i%2==0&&i!=2){continue;}	
    	if(kt(L,i)==1){
			a[j]= i;
			j+=1;}
	}
		cout<<a[606]<<endl;
		cout<<j<<endl;
	for(ll i=0;i<j;i++){
		cout<<a[i]<<" ";
	}
}

int main()
{ ll L, R;
cin>>L>>R;	
songt(L,R);
return 0;
}
