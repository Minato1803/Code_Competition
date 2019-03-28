#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/input.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
string st, ed;

//-----------------------------

ll change(char c)
{
	return c-48;
}

ll calc( string s, string t)
{
	ll min=0;
	ll minst=0;
	ll mined=0;
	minst=change(s[0])*10+change(s[1]);
	mined=change(t[0])*10+change(t[1])-minst;
	mined*=60;
	minst = change(s[3])*10+change(s[4]);
	mined -= minst;
	minst = change(t[3])*10+change(t[4]);
	mined += minst;
	return mined;
}


void Solves()
{
	cin>>st>>ed;
	ll sum= calc(st,ed)/2;
	ll hourst = change(st[0])*10+change(st[1]); 
	ll minst = change(st[3])*10+change(st[4]);
	minst+=sum;
	hourst+=(minst/60);
	minst%=60;
	if(hourst<10)
		cout<<"0"<<hourst<<":";
	else
		cout<<hourst<<":";
	if(minst<10)
		cout<<"0"<<minst;
	else
		cout<<minst;		
//	cout<<hourst<<":"<<minst<<endl; 
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
