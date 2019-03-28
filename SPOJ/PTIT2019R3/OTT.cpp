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
string s;
ll Alp[125]={0};
ll Count =0;
//-----------------------------

void Solves()
{
	cin>>s;
	for(ll i=0;i<s.length();i++)
	{
		Alp[s[i]]++;
		if(Alp[s[i]]==1)
			Count++;
	}
	sort(Alp,Alp+125);
	ll Result=0;
	if(Count<=2)
		cout<<0<<endl;
	else
	{
		ll it=0;
		for(ll i=0;i<125;i++)
		{
			if(Alp[i]!=0)
			{
				Result+=Alp[i];
				Count-=1;
			}
			if(Count<=2)
				break;
		}
	}
	cout<<Result<<endl;	
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
