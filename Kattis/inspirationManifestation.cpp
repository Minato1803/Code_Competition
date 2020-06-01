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
ll n,k,p;
map <char,ll> Count;
//-----------------------------
void ins(string &s)
{
	char c = 'a';
	for(ll i=0;i<k;i++)
	{
		s+=c;
		c++;
	}
	c= 'a';
	for(ll i = k;i<n;i++)
	{
		s+=c;
		c++;
		if(c >= k+97)
		{
			c = 'a';
		}
	}
}
void palin(string &s)
{
	ll check = -1;
	char c;
	if((p-1-(p/2-1)) < k)
	{
		check = k - (p-1-(p/2-1));
		c = s[p-1-(p/2-1)];
//		cout<<check<<" "<<c<<endl;
	}
	for(ll i= p/2-1 ;i>=0; i--)
	{
		s[p-1-i] = s[i];
	}
//	if(n/2 == p && k == 2)
//	{
		ll Count = 0;
		c ='b';
		for(ll i = p;i<s.length();i++)
		{
			Count++;
			s[i] = c;
			if(Count == p)
			{
				Count = 0;
				c++;
				if(c >= k+97)
				{
					c = 'a';
				}
			}
		}
//	}
//	for(ll i = k ;i < s.length();i++)
//	{
//		if(check > 0)
//		{
//			s[i] = c;
//			c++;
//			check --;
//		}
//	}
}
// 9 2 3 abaabaaba
//		  abcabcabca
// 10 3 4 abbaccabca
//		  abbaccaaca
void Solves()
{
	cin>>n>>k>>p;
	string s;
	ins(s);
	if(p !=1 )
		palin(s);
	for(ll i=0;i<s.length();i++)
	{
		Count[s[i]]++;
	}
	if(Count.size() < k || (n >= (p*2 +1) && k == 2))
	{
		cout<<"IMPOSSIBLE"<<endl;
		return;
	}
	cout<<s<<endl;
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
