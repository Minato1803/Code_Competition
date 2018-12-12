#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,m;
	cin>>n>>m;
	ll count=0,d=0;
	loop: n-=1;
		count+=1;
		d+=1;
		if(count%m==0){
			n+=1;
			count=0;
		}
		if(n!=0){
			goto loop;
		}
		cout<<d;
		return 0;
}
