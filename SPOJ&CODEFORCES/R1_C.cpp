#include <iostream>
using namespace std;
long long dem(string a, long long i)
{   long long c=0;
	for(long long j=i;j<a.length();j++){
		if(a[i]==a[j]){
		c+=1;}
	}
	return ((c-1)*(c)/2);
}

bool kt(string a, long long i)
{
	for(long long j=0;j<i;j++){
		if(a[i]==a[j]){ return 0;}
	}
	return 1;
}	

int main()
{   
	string a;
	cin>>a;
	long long count=0;	
	for(long long i=0;i<a.length();i++){
		if(kt(a,i)==1){
		    count+=dem(a,i);
		}
	}
	cout<<count;		
	return 0;	
}
