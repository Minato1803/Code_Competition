#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================
ll numeric(char c)
{
	return c-48;
}

ll calc(ll a, ll b,char t)
{
	if(t=='*')
		return a*b;
	if(t=='-')
		return a-b;	
	if(t=='+')
		return a+b;			
}

int main()
{
    buff;
//    Input;
    string s;
	ll n;
	stack <char> mathh;
	stack <ll> num;
	ll count=0;
	cin>>n>>s;
	for(ll i=s.length()-1;i>=0;i--)
	{
		if(s[i]>=48&&s[i]<=57)
		{
			count++;
			if(count>=2)
			{
				ll dig = num.top();
				num.pop();
				if(count==2)
				{
					dig+=numeric(s[i])*10;
					num.push(dig);
				}
				if(count==3)
				{
					dig+=numeric(s[i])*100;
					num.push(dig);
				}
			}
			else
				num.push(numeric(s[i]));
		}	
		else
		{
			count=0;
			mathh.push(s[i]);
		}
	}
	while(!mathh.empty())
	{
		ll a = num.top();
			num.pop();
		ll b= num.top();
			num.pop();
		char t = mathh.top();
			mathh.pop();
		ll result = calc(a,b,t);
//		cout<<a<<t<<b<<"= "<<result<<endl;
			num.push(result);
	}
	cout<<num.top();
    return 0;
}
