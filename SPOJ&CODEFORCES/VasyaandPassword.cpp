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
	ll t;
	cin>>t;
	for(ll j=0;j<t;j++)
	{
		string s;
		cin>>s;
		ll low=0, up=0,num=0;
		for(ll i=0;i<s.length();i++)
		{
			if(islower(s[i])!=0)	
				low+=1;
			if(isupper(s[i])!=0) 		
				up+=1;
			if(isdigit(s[i])!=0) 	
				num+=1;
		}
	
		
	if(low>=1&&up>=1&&num>=1) 
		cout<<s<<endl;
	else
	{
		if(low==0)
		{
			if(num>up)
			{
				for(ll i=0;i<s.length();i++)
					if(isdigit(s[i])!=0)
					{
						s[i]=97;
						low+=1;
						break;
					}
			}
			else
			{
					for(ll i=0;i<s.length();i++)
						if(isupper(s[i])!=0)
						{
							s[i]=97;
							low+=1;
							break;
						}
			}
		}
		if(up==0)
		{
			if(num>low)
			{
				for(ll i=0;i<s.length();i++)
					if(isdigit(s[i])!=0)
					{
						s[i]=65;
						up+=1;
						break;
					}
			}
			else
			{
					for(ll i=0;i<s.length();i++)
						if(islower(s[i])!=0)
						{
							s[i]=65;
							up+=1;
							break;
						}
			}
		}
		if(num==0)
		{
			if(low>up)
			{
				for(ll i=0;i<s.length();i++)
					if(islower(s[i])!=0)
					{
						s[i]=48;
						num+=1;
						break;
					}
			}
			else
			{
					for(ll i=0;i<s.length();i++)
						if(isupper(s[i])!=0)
						{
							s[i]=48;
							num+=1;
							break;
						}
			}
		}
		cout<<s<<endl;
	}
}
	return 0;
}
