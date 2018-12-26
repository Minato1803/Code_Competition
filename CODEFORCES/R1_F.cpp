#include <iostream>
using namespace std;

int main()
{
	int k,j=0,vt=0;
	long score=0;
	cin>>k;
	long *a= new long[k*2];
	for(int i=0;i<k;i++){
		j+=1;
		for(int i=0;i<j;i++){
			cin>>a[i];
		}
		int max=0;
		for(int i=0;i<j;i++){
			if(max<a[i]&&vt<=i){
				max=a[i];
				vt=i;
			}
		}
		if(max==0){score+=a[0];}
		score+=max;	
	}
	cout<<score;
	return 0;
}
