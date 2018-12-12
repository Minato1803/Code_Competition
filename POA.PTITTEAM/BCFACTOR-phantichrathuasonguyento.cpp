#include <iostream>
using namespace std;

bool kt(int N,int i)
{ while(i<N){
	if(i==2){return true;}
	for(int j=2;j<i;j++){
		if(i%j==0){return false ;}	
		}
	return true;	
		}
}

int main()
{ int N;
cin>>N;
for(int i=2; i<=N;i++){
		int dem=0; 
    if(kt(N,i)==1){
		loop: if(N%i==0){
		           dem+=1;
		           N=N/i;
		           goto loop;
		}
		if(dem>0){cout<<i<<" "<<dem<<endl;}}
}
return 0;
}
