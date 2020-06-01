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
ll n, Count = 0, Countlen = 0;
string s;
string token[105];
//-----------------------------

void Solves()
{
	cin>>n>>s;
	ll Countz = 0, Count1 = 0;
		ll start = 0;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i] == '0')
		{
			Countz++;
		}
		else
			Count1++;
		Countlen++;	
		if(Countz == Count1)
		{
			token[Count++] = s.substr(start, Countlen-1);
//			cout<<token[Count-1]<<endl;
			start = i;
			i--;
			Countz = 0;
			Count1 = 0;
			Countlen = 0;
		}	
	}
	if(Count == 0)
	{
		cout<<Count+1<<endl;
		cout<<s<<endl;
		return;
	}
	token[Count++] = (s.substr(start, s.length()-1));
	cout<<Count<<endl;
	for(ll i=0;i<Count;i++)
	{
		cout<<token[i]<<" ";
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
