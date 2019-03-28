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
ll r,c,l;
ll c1,c2,r1,r2;
string s;
//-----------------------------

void Solves()
{
	cin>>r>>c>>l;
	char a[r+5][c+5];
	for(ll i=0;i<r;i++)
		for(ll j=0;j<c;j++)
			a[i][j] = '.';
	for(ll i=0;i<l;i++)
	{
		cin>>r1>>c1>>r2>>c2>>s;
		for(ll i=r1-1;i<r2;i++)
			for(ll j=c1-1;j<c2;j++)
				a[i][j] = s[0];
	}
	for(ll i=0;i<r;i++)
	{
		for(ll j=0;j<c;j++)
			cout<<a[i][j];
		cout<<endl;
	}
			
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
