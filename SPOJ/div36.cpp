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
//-----------------------------

ll check(string s)
{
	ll Count = 0;
	for(ll i=0;i<s.length();i++)
	{
		Count += (s[i]-48);
	}
	if(Count%3==0&&(s[s.length()-1]-48) % 2==0)
		return 1;
	else
		return 0;	
}

void Solves()
{
	ll t;
	cin>>t;
	while(t--)
	{
		cin>>s;
		if(check(s))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;	
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
