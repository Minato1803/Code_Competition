#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
ll t;
string s;
//-----------------------------

void Solves()
{
//	cin>>t;
	scanf("%lld",&t);
	char chr;
	ll Count;
	while(t>0)
	{
		cin>>s;
//		scanf("%c",&s);
		chr = s[0];
		Count=1;
//		string ans;
		for(ll i=1;i<s.length();i++)
		{
			if(s[i]== chr)
			{
				Count++;
			}
			else
			{
				printf("%lld%c",Count,chr);
				Count=1;
				chr = s[i];
			}
		}
		printf("%lld%c\n",Count,chr);
//		cout<<ans<<endl;
		t--;
	}
}

int main()
{
//    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
