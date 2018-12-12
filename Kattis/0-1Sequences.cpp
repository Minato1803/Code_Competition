#include <bits/stdc++.h>
using namespace std;

#define  ll              long long
#define  db              double
#define  fix_set(x)      fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  input			freopen("input.in", "r", stdin)
#define  output			freopen("output.out", "w", stdout)
#define mod107			1000000007;

//====================================================================================================
string s;
void Solves()
{
	cin>>s;
	ll len=s.length()-1;
	ll count=0,count0=0;
	for(ll i=s.length()-1;i>=0;i--)
	{
		cout<<len<<"***"<<i<<endl;
//		if(i==0)
//		{
//			if(s[i]=='1')
//			{
//				count+=count0;
//			}
//			else if(s[i]=='?') count++;
//			break;
//		}
		if(s[i]=='0') count0++;
		if(s[i]=='?')
		{
			if(s[i-1]=='0') 
				{
					count0++;
					s[i]=0+48;
				}
			else 
			{
				s[i]=1+48;
				len--;
			}
			count++;
			continue;
		}
			
		if(s[i]=='1')
		{
			count=(count+(len-i))% mod107;
			len--;
		}	
//		cout<<len<<endl;
	}
	cout<<count% mod107;
}

int main()
{
    buff;
//    input; output;
	Solves();
    return 0;
}
