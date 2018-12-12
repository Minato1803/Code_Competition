#include <bits/stdc++.h>
using namespace std;
#define ll long long

string moveleft(string s)
{
	s.erase(s.length()-1,1);
	s.insert(0,"*");
	return s;
}
string moveright(string s)
{
	s.erase(0,1);
	s.insert(s.length(),"*");
	return s;
}

int main()
{
	string s;
	ll n,t;
	cin>>n>>t>>s;
	for(ll i=2;i<=t;i++)
	{
		if(s[s.length()-1]=='*'&&i<=t)
			s = moveleft(s);
//			cout<<i<<" "<<s<<endl;
		if(s[s.length()-1]=='1'&&i<=t)
		{
			for(ll j=1;j<=n-3;j++)
			{
				if(i==t) break;
				i++;
				s= moveright(s);	
//				cout<<i<<" "<<s<<endl;
			}
		}	
	}
	cout<<s;
	return 0;
}
