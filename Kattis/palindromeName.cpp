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
ll CountMiss = 0;
//-----------------------------

void Solves()
{
	cin>>s;
	for(ll i = 0;i<(s.length()+1)/2;i++)
	{
		if(s[i] != s[s.length()-1-i])
		{
			CountMiss++;
		}
	}
	ll tmpCount = s.length();
	string palin = s;
	reverse(palin.begin(), palin.end());
	while(palin.length()!=0)
	{
		palin.erase(0,1);
		string tmp = s;
		tmp+=palin;
//		cout<<tmp<<endl;
		ll Count = palin.length();
		for(ll i = 0;i<(tmp.length()+1)/2;i++)
		{
			if(tmp[i] != tmp[tmp.length()-1-i])
			{
				Count++;
			}
		}
//		cout<<Count<<endl;
		if(Count < tmpCount)
		{
			tmpCount = Count;
		}
	}
	cout<<min(CountMiss,tmpCount)<<endl;
}
//	abcdaadd
//	abcda
//	.add = c<-ba
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
