#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ios_base::sync_with_stdio(false);
//	cin.tie(0);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	if(s[0]!=45)
	{
		cout<<s;
		return 0;
	}
	if(s[s.length()-2]>s[s.length()-1])
	{
		s.erase(s.length()-2,1);
	}
	else s.erase(s.length()-1,1);
	
	if(s.length()==2&&s[1]==48)
	{
		cout<<0;
	}
	else
	{
		cout<<s;
	}
}
