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
string s[1005];
string Count="";
//-----------------------------

void Solves()
{
	s[0]= "a";
	s[1] = "hihi";
	s[2] = "dongoc";
	for(ll i = 3;i<=10;i++)
	{
		s[i] = s[i-3] + s[i-2] + s[i-1];	
	}
	for(ll i =0;i=10;i++)
	{
		Count=s[i];
	}
	cout<<Count<<endl;
	cout<<s[10].length()<<endl;
	
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
