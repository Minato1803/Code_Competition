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
ll n;
string s;

void Solves()
{
	cin>>n;
	cin>>s;
	ll len=-1,posW=-1;
	for(ll i=s.find("P");i>=0;i--)
	{
		if(s[i]=='W')
		{
			posW=i;
			break;
		}
	}
	if(posW>=0)
	{
		len = s.find("P")-posW-1;
//	cout<<posW<<" "<<len<<endl;
	}
	for(ll i = s.find("P");i<s.length();i++)
	{
		if(s[i]=='W')
		{
			posW=i;
			break;
		}
	}
	if(posW>s.find("P"))
	{
		if(len > (posW-s.find("P")-1))
			len=(posW-s.find("P")-1);
	}
	if(len<0) 
		cout<<"0";
	else
		cout<<500-len;	
	
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
