#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,m;
	cin>>n>>m;
	string s;
	ll posB=0;
	ll lengthB=0;
	ll pos=0;
	for(ll i=1;i<=n;i++){
		cin>>s;
		if(s.find("B")!=-1)
		{
			posB=s.find("B");
			pos=i;
			ll count=0;
			for(ll j=s.find("B");j<m;j++)
			{
				if(s[j]=='B')
				{
					count+=1;
				}
			}
			lengthB=count;
			
		}
	}
	
//	cout<<pos<<" "<<lengthB<<" "<<posB<<endl;
	
	if(lengthB==1){
		cout<<pos<<" "<<posB+1;
	}
	else
	{
		pos-=lengthB/2;
		cout<<pos<<" "<<posB+1+lengthB/2;
	}
	return 0;
}
