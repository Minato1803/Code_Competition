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
ll t, n, k1,k2,tmp;
bool choose = 0;
//-----------------------------

void Solves()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k1>>k2;
		for(ll i = 0 ;i<k1;i++)
		{
			cin>>tmp;
			if(tmp == n)
			{
				choose = 1;
			}
		}
		for(ll i = 0 ;i<k2;i++)
		{
			cin>>tmp;
		}
		if(choose == 0)
		{
			cout<<"NO"<<endl;
		}
		else
			cout<<"YES"<<endl;
		choose = 0;	
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
