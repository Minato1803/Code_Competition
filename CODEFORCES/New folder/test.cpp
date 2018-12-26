#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t,tmp=0;
	ll s[30001];
	s[0]=0;
	for(ll i=1;i<3001;i++){
		tmp+=i;
		s[i]=tmp;
	}
	fstream f;
	f.open("output.txt", ios::out);
	for (ll i = 1; i <= 50; i++){
		f<<i<<" "<<s[i-1]<<endl;
	}
	return 0;
}
