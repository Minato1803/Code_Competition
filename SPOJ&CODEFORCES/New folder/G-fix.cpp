#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	map <char,char> mp;
	mp['{']='}';
	mp['[']=']';
	mp['(']=')';
	for(ll i=0;i<t;i++)
	{
		ll pos=0;
		string s;
		cin>>s;
		stack <char> brace;
		for(ll j=0;j<s.length();j++){		
			if(s[j]=='['||s[j]=='{'||s[j]=='(')
			{
				brace.push(s[j]);
				pos=j;
			}
			else{
				if(s[j]==']'||s[j]=='}'||s[j]==')'){
					if(brace.size() == 0)
					{
						cout<<"NO\n";
						goto loop;
					}
					else 
					{
					if(mp[brace.top()]==s[j]&&j>pos+1){
						brace.pop();

					}
					}
				}
			}
		}
	if(brace.size()==0) cout<<"YES\n";
	else cout<<"NO\n";
	loop:;
	}
	return 0;
}
