#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll TinhTime(ll i, ll t[],ll S,ll Sm)
{
	ll m;
	if(S-t[0]<=119&&Sm<12000){m=6000; return m;}
	if(S-t[0]<=119&&Sm==12000){m=3000; return m;}
	if(S-t[0]<=119&&Sm==15000){m=0;return m;}
	if(S-t[0]<=1439&&Sm<39000){m=6000;return m;}
	if(S-t[0]<=1439&&Sm==39000){m=1000;return m;}
	
	
}

int main()
{
	ll N,S=0,Sm=0;
	cin>>N;
	ll *t= new ll[N];
	for(ll i=0;i<N;i++){
		cin>>t[i];
		S+=t[i];
		Sm+=TinhTime(i,t,S,Sm);
		cout<<TinhTime(i,t,S,Sm);
	}
	return 0;	
}
