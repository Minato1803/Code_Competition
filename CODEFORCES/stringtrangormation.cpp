#include <bits/stdc++.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixced<<setprecision(x)

//====================================================================================================

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string s;
	cin>>s;
	if(s.find("a")==-1)
	{
		cout<<-1;
		return 0;
	}
	ll alp= 98;
	for(ll i=s.find("a")+1;i<s.length();i++)
	{
		if(s[i]<=alp)
		{
			s[i]= alp;
			alp+=1;
		}
		if(alp>122)
		{
			cout<<s;
			return 0;
		}	
	}
	cout<<-1;
	return 0;
}
