#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c(char c){
	return (int)c-48;
}
int main()
{
	ll Q;cin>>Q;
	for(ll i=0;i<Q;i++){
		ll l,r,k,s=0;cin>>l>>r>>k;
		map<ll,ll>aa;
		aa[k]=1;
		aa[1*10+k]=1;
		aa[k*10]=1;
		aa[k*10+1]=1;
		for(ll d=k;d<=r;d++)
		{
			ll a=1;
			stringstream ss;ss<<d;
			string u=ss.str();
				
			for(ll j=0;j<u.size();j++)
			{
			if(u[j]=='0')u[j]='1';
			
				a*=c(u[j]);
				
		
			}
				if(aa[a]==1){
					if(d>=l){
					s++;
				}
				cout<<d<<" ";
			aa[d]=1;
			
			
		}	
	}
		cout<<s<<endl;;
	}
	return 0;
}
