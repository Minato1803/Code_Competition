#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll a,b,c;
	cin>>a>>b>>c;
	if(a==1){
		if(c==1){
			cout<<a+b+c;
			return 0;
		}
		else{
			cout<<(a+b)*c;
			return 0;
		}
	}
	if(b==1){
		if(a>c){
			cout<<a*(b+c);
			return 0;
		}
		else{
			cout<<(a+b)*c;
			return 0;
		}
	}
	if(c==1){
		if(a==1){
			cout<<a+b+c;
			return 0;
		}
		else{
			cout<<a*(b+c);
			return 0;
		}
	}
		cout<<a*b*c;
	return 0;
}
