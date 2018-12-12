#include <bits/stdc++.h>
using namespace std;
#define ll long long

void QAQ(string n)
{
	ll demQtr=0, demQs=0,count=0;
	for(ll i=n.find("Q");i<n.length();i++){
		if(n[i]=='Q'){ demQtr+=1;}
	}
	for(ll i=n.find("Q");i<n.length();i++){
		if(n[i]=='Q'){ 
			demQtr-=1;
			demQs+=1;
		}
		if(n[i]=='A'){
			count+=demQtr*demQs;
		}
	}
	cout<<count;	
}

int main()
{
	string n;
	cin>>n;
	QAQ(n);
	return 0;
}
