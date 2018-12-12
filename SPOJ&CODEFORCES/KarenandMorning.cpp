#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll chchar(char a)
{
	return a-48;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	ll minbase = chchar(s[3])*10 + chchar(s[4]);
	ll min=chchar(s[1])*10+chchar(s[0]);
	if(min==50&&minbase>=51&&minbase<=59) goto a;
	if(min==51&&minbase>=52&&minbase<=59) goto b;
	if(min==60||min==70||min==80||min==90)
	{
		a:
		cout<<(60-minbase)+((90-min)/10)*60+1;
		return 0;
	}
	if(min==61||min==71||min==81||min==91)
	{
		b:
		cout<<(60-minbase)+((91-min)/10)*60+2;
		return 0;
	}
	
	if(min==32)
	{
		if(min<minbase)
			cout<<60-minbase;
		else cout<< min-minbase;
		return 0;
	}
	if(min<minbase)
		cout<<min+10+(60-minbase);
	else cout<<min-minbase;	
	return 0;
}
