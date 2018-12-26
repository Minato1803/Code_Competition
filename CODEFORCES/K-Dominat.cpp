#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	ll a[125] = {0};
	for(ll i=0;i<s.length();i++)
		a[s[i]]++;
	ll max=0, pos=0;	
	for(ll i=97;i<=122;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			pos=i;
		}
	}
	if(max==1)
	{
		if(s.length()%2==0)
			cout<<s.length()/2;
		else cout<<s.length()/2+1;
		return 0;
	}
	cout<<a[97]<<" "<<a[98]<<" "<<a[99]<<endl;
	ll result= 0, count= 1;
		for(ll j=0;j<s.length();j++)
		{
			if(s[j]!=pos)
				count+=1;
			else 
			{
				if(result<count)
					result=count;
				count=1;
				continue;	
			}
		}
	cout<<result;	
	return 0;
}
