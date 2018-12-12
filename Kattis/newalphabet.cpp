//
#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define db              double
#define fix_set(x)      fixed<<setprecision(x)
#define buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input			freopen("input.in", "r", stdin)
#define output			freopen("output.out", "w", stdout)

//====================================================================================================

string s;

void trans(char a)
{
	string ss[125];
	ss[65]="@";
	ss[66]="8";
	ss[67]="(";
	ss[68]="|)";
	ss[69]="3";
	ss[70]="#";
	ss[71]="6";
	ss[72]="[-]";
	ss[73]="|";
	ss[74]="_|";
	ss[75]="|<";
	ss[76]="1";
	ss[77]="[]\\\/[]";
	ss[78]="[]\\\[]";
	ss[79]="0";
	ss[80]="|D";
	ss[81]="(,)";
	ss[82]="|Z";
	ss[83]="$";
	ss[84]="']['";
	ss[85]="|_|";
	ss[86]="\\\/";
	ss[87]="\\\/\\\/";
	ss[88]="}{";
	ss[89]="`/";
	ss[90]="2";
	cout<<ss[a];
//	for(ll i=65;i<=90;i++) cout<<ss[i]<<endl;
	
}

void Solves()
{
	getline(cin,s);
	for(ll i=0;i<s.length();i++)
	{
		char c= toupper(s[i]);
//		cout<<c;
		if(c<65||c>90)
		{
			cout<<s[i];
		}
		
		trans(c);
	}
}

int main()
{
    buff;
//    input; output;
	Solves();
    return 0;
}
