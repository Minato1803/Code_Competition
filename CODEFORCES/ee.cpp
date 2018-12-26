#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;cin>>n;
	vector<ll>a;a.resize(6);
	map<ll,ll>aa;
	map<ll,ll>aaa;
	vector<ll>b=a;
	sort(b.begin(),b.end());
vector<ll>::iterator it;
	for(ll i=0;i<n;i++ ){
		
		for(ll j=0;j<6;j++)
		{
			cin>>a[j];
		}
		it=unique(a.begin(),a.end());
		for(it=a.begin();it!=a.end();it++){
			aa[*it]++;
		}	
 
	}

	for(ll i=1;i<=9;i++){
		if(aa[i]==0) {
		cout<<i-1;return 0;
	}
	}
	 if(aa[0]==0||n==1){
		for(ll i=1;i<9;i++){
			if(aa[i]>=1&&aa[i+1]==0){
				cout<<i;
				return 0;
			}
		}
		if(aa[9]>=1){
			cout<<9;
		}
		else cout<<0;
	}
	else
	{
		for(ll i=1;i<=9;i++)
		{
			if(aa[i]==1) 
			{
				if(i-1>=0)
			cout<<i*10+(i-1);
			else cout<<i*10-1;
			return 0;
			}
		}
	}
	return 0;
}
