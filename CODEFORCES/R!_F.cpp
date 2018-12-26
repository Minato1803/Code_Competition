#includde<iostream>
using namespace std;
#define ll long long


void timduong(ll **a)
{	ll b[200];
	for(int i=1;i<k;i++){
		for(int j=0;j<k;j++){
			if(a[i][j]==0){break;}
		}
	}		
}

int main() 
{   ll k;
	cin>>k;
	ll **a= new ll *[k];
	for(int i=0; i<k;i++){
		a[i] = new ll[k]
	}
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			if(j<=i){ cin>>a[i][j];}
				else a[i][j]=0;
		}
	}
}
