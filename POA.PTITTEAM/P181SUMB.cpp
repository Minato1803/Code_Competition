#include<iostream>
#include <vector>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
#define ll signed long long int

void pltime(ll DZ,ll AZ,ll DD,ll DH,ll DM,ll DS, ll FH, ll FM, ll FS)
{	
	ll AD, AH,AM,AS;
	DM+= (DS+FS)/100;
	if(DS+FS==100||DS+FS==200){AS=0;}
		else {
			 if((DS+FS)<100){ AS=FS+DS;} 
			 if((DS+FS)<200&&(DS+FS)>100){ AS= (DS+FS)-100;}
			 if((DS+FS)<300&&(DS+FS)>200){ AS=(DS+FS)-200;}
		}
	DH+= (DM+FM)/100;
	if(DM+FM==100||DM+FM==200){AM=0;}
		else {
			 if((DM+FM)<100){ AM=FM+DM;} 
			 if((DM+FM)<200&&(DM+FM)>100){ AM= (DM+FM)-100;}
			 if((DM+FM)<300&&(DM+FM)>200){ AM=(DM+FM)-200;}
		}
	DH= DH+abs(AZ-DZ);
	if((AZ-DZ)<0){AD=DD-DH/100;}
		else
			AD= DD+DH/100;
	if(DH==100||DH==200||DH==300){DH=0;}
	 	else{			
			 if(DH<200&&DH>100){ DH-=100;}
			 else 
			 	if(DH<300&&DH>200){ DH-=200;}
		}
	AH= DH+FH;
	if(AH>=100){
		AD+=1;
		if(AH==100||AH==200||AH==300){AH=0;}
		if(AH>100){AH-=100;}
	}			 		 	
	cout<<AD<<" "<<AH<<" "<<AM<<" "<<AS<<endl;		
	
}

int main()
{
	ll N;
	cin>>N;
	for(ll i=0;i<N;i++){
		ll DZ,AZ,DD,DH,DM,DS,FH,FM,FS;
		cin>>DZ>>AZ>>DD>>DH>>DM>>DS>>FH>>FM>>FS;
		pltime(DZ,AZ,DD,DH,DM,DS,FH,FM,FS);
	}
	return 0;
}
