#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output2.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================
ll n,c;
string s;
void Solves()
{
	cin>>n>>c;
	cin>>s;
	ll counta=0, countb=0;
	ll st,ed;
	if(s.find("a")>s.find("b"))
	{
		st =  s.find("b");
		ed = s.find("a");	
	}
	else
	{
		ed =  s.find("b");
		st = s.find("a");
	}
	for(ll i=st;i<=ed;i++)
	{
		if(s[i]=='a')
			counta++;
		if(s[i]=='b')
			countb++;
	}
	loop:
//	cout<<st<<" "<<ed<<endl;	
//	cout<<counta<<" "<<countb<<endl;
	if(counta*countb==c)
	{
		while(s[ed+1]!='a'&&s[ed+1]!='b'&&ed+1<s.length())
			ed++;
//		cout<<ed<<endl;
		cout<<ed-st+1<<endl;
	}
	else
	{
		if(c-(counta*countb)<0)
			cout<<ed-st<<endl;
		else
		{
			ed++;
			s[ed]=='a'?counta++:countb++;
			goto loop;	
		}	
	}
				
}
int main()
{
    buff;
    //Input;
//    Output;
    Solves();
    return 0;
}
