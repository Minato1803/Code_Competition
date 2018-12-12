#include <bits/stdc++.h>
using namespace std;
#define ll long long
string convertInt(ll c)
{
   stringstream s;
   s << c;
   return s.str();
}

int main()
{
	ll n;
	cin>>n;
	ll count=0;
	if(n<512)
	{
		cout<<count;
		return 0;
	}
//	if(n<10512)
//	{
//		cout<<11; 
//	}
	
	for(ll i= 512; i<=n;i++)
	{
		string s= convertInt(i);
		if(s.find("512")!=-1)
			count++;
		if(s.find("512512")!=-1)
			count++;		
			
	}
	cout<<count;
	return 0;
}
