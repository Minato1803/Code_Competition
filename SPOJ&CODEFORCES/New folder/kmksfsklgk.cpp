#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll transInt(char s)
{
	return s-48;
}

int main()
{
	ll n;
	cin>>n;
	for(ll t=0;t<n;t++)
	{
		string s;
		cin>>s;
		ll a[6]={0};
		ll j=0,count=0;
		for(ll i=0;i<s.length();i++){
			if(s[i]==',')
			{
				count+=1;
				continue;
			}
			if(s[i]!=','&&s[i+1]!=','&&i<s.length()-1)
			{
				a[j++]=transInt(s[i])*10+transInt(s[i+1]);
				i++;
			}
			else 	if(s[i]!=',')
					{
						a[j++]=transInt(s[i]);
					}
		}
		ll summ=0;
		for(ll i=0;i<j;i++){
			summ+=a[i]*pow(60,count);
			count-=1;
		}
		cout<<summ<<endl;
	}
	return 0;
}
