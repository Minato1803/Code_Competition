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
ll t,n;
string s;
//-----------------------------
void Solves()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		if(s.find("1")> s.rfind("0") || s.find("1") == -1 || s.find("0") == -1)
			cout<<s;
		else
		{
			for(ll i = 0;i<s.length();i++)
			{
//				cout<<s.find("1")<<" "<<s.rfind("0")<<endl;
				if(i<s.rfind("0") && i>= s.find("1"))
				{
					continue;
				}
				cout<<s[i];
			}	
		}
		cout<<endl;	
	}
	
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
