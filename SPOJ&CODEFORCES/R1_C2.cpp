#include <iostream>
using namespace std;

long demchuoi(string a, long i)
{   long count=0;
	for(long j=i+1; j<a.length();j++){
		if(a[i]==a[j]){
			count++;
		}
	}
	return count;	
}

int main()
{   long count=0;
	string a;
	cin>>a;
	for(long i=0;i<a.length();i++){
			count+=demchuoi(a,i);
	}
	cout<<count;
	return 0;	
}
