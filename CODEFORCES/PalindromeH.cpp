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
//-----------------------------

void rev(string &s)
{
	for(ll i = 0;i<(s.length()+1)/2;i++)
	{
		s[s.length()-1-i] = s[i];
	}
}

void trans(string &s)
{
	ll len = (s.length()+1)/2;
	ll Num = 0;
	for(ll i = len-1;i>=0;i--)
	{
		Num = (s[i] - 48) +1;
		if(Num >= 0 && Num <= 9)
		{
			s[i] = Num + 48;
			rev(s);
			cout<<s<<endl;
			return;
		}
		else
		{
			s[i] = Num%10 + 48;
			Num/=10;
		}
	}
	if(Num == 1)
	{
			cout<<1;
			for(ll i = 0;i<s.length()-1;i++)
				cout<<0;
			cout<<1<<endl;
			return;	
	}
}

void Solves()
{
	cin>>t;
	while(t--)
	{
		string s = "";
		cin>>s;
		string palin = "";
		palin.insert(0,s);
		rev(palin);
//		cout<<palin<<"****"<<endl;
		if(palin <= s)
		{
			trans(palin);
		}
		else
		{
			cout<<palin<<endl;
		}
	}
}

int main()
{
    buff;
//    Input;
//    Output;
//    clock_t start, end;
//    	double time_use;
//    start = clock();
//    	Solves();
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("%f seconds", time_use);
    Solves();
    return 0;
}
