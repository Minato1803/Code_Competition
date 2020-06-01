#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
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
ll n;
//-----------------------------


void Solves()
{
	cin>>n;
	while(n--)
	{
		ll Count = 0;
		ll a;
		for(ll i = 0;i<4;i++)
		{
			cin>>a;
			if(a>0)
			{
				Count++;
			}
		}
		switch(Count)
		{
			case 0:
			{
				cout<<"Typically Otaku"<<endl;
				break;
			}
			case 1:
			{
				cout<<"Eye-opener"<<endl;
				break;
			}
			case 2:
			{
				cout<<"Young Traveller"<<endl;
				break;
			}
			case 3:
			{
				cout<<"Excellent Traveller"<<endl;
				break;
			}
			case 4:
			{
				cout<<"Contemporary Xu Xiake"<<endl;
				break;
			}
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
