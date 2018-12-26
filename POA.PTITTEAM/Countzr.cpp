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
ll t;
ll a,n,mul=1;
//-----------------------------

ll Count(ll a)
{
	ll Count=0;
	string s = to_string(a);
	for(ll i = s.length()-1;i>=0;i--)
	{
		if(s[i]=='0')
			Count++;
		else break;	
	} 
	return Count;
}

void Solves()
{
	cin>>t;
	while(t>0)
	{
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			cin>>a;
			mul*=a;
		}
		cout<<Count(mul)<<endl;
		t--;	
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
