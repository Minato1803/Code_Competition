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
ll n, Count = 0, maxx = 0;
vector <string> s;
string tmp;
//-----------------------------
void Solves()
{
	cin>> n ;
	for( ll i = 0;i<n;i++)
	{
		cin>>tmp;
		s.pb(tmp);
	}
	for(ll i = 0;i<n;i++)
	{
		Count = 0;
		for(ll j = 0;j<n;j++)
		{
			if(s[i] == s[j])
				Count++;
		}
		maxx = max(maxx, Count);
	}		
	cout<<maxx<<endl;
}


int main()
{
    buff;
   /* Input;
    Output;*/
    
    /*clock_t start, end;
    	double time_use;
    start = clock();
    	Solves();
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%f seconds", time_use);*/
    
    Solves();


    return 0;
}
