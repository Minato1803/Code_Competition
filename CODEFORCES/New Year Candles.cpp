#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll a,b;
	cin>>a>>b;
	ll s=0,count=0;
	loop:
	a-=1;
	s+=1;
	count+=1;
	if(s%b==0){
		a+=1;
	}
	if(a>0){
		goto loop;
	}
	cout<<count;
	return 0;
}
