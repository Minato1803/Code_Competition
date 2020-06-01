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
ll r,c,t;
//-----------------------------
void Solves()
{
	cin>>t;
	for(ll test = 1;test<=t;test++)
	{
		stack <string> half;
		cin>>r>>c;
		for(ll i = 0;i<r;i++)
		{
			cin>>s;
			for(ll i = 0;i<(s.length()+1)/2;i++)
			{
				char c = s[i];
				s[i] = s[s.length()-1-i];
				s[s.length()-1-i] = c;
			}
			half.push(s);
		}
		cout<<"Test "<< test<<endl;
		for(ll i = 0;i<r;i++)
		{
			cout<<half.top()<<endl;
			half.pop();
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
