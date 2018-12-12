#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n)
{
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
		return 1;
}

int main()
{
	ll perfect[1001], prime[1200], other[1001];
	for(ll i=2;i<=1000;i++)
	{
		perfect[i]=i*i;
		other[i]=i*4/2;
	}
	ll j=2;
	for(ll i=2;i<=8000;i++)
	{
		if(isPrime(i)==1){
			prime[j++]=i;	
		}
	}
	ll t;
	cin>>t;
	for(ll j=0;j<t;j++)
	{
		
		string s,ss="";
		cin>>s;
		cout<<"Case "<<j+1<<": ";
		for(ll i=0;i<s.length();i++)
		{
			bitset<8> binary(s[i]);
			ss+=binary.to_string();
		}
		ll  pf=2, pr=2,ot=3;
		for(ll i=0;i<ss.length()-1;i+=2)
		{
			if(ss[i]=='1'&&ss[i+1]=='1')
			{
				cout<<prime[pr++];
			}
				else if(ss[i]=='0'&&ss[i+1]=='0'){
					cout<<perfect[pf++];
				}
					else cout<<other[ot++];
			if(i!=ss.length()-2)
			{
				cout<<",";
					}		
		}
		cout<<endl;	
			
	}
}
