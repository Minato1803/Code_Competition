#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t,tmp=0;
	cin>>t;
	ll s[30001];
	s[0]=0;
	for(ll i=1;i<3001;i++){
		tmp+=i;
		s[i]=tmp;
	}
	while(t>0)
	{
		ll a,b;
			cin>>a>>b;
			if(s[a-1]!=b){
				cout<<"INCORRECT "<<s[a-1];
			}
			else cout<<"CORRECT";
		cout<<endl;
		t--;
	}
	return 0;
}
