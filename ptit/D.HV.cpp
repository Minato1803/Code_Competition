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
ll t,tmpx[5],tmpy[5],ansx, ansy;

//-----------------------------

void Solves()
{
	cin>>t;
	while(t--)
	{
		map <ll,ll> coorx;
		map <ll,ll> coory;
		for(ll i= 0 ;i<3;i++)
		{
			cin>>tmpx[i];
			coorx[tmpx[i]]++;
			for(ll i= 0 ;i<3;i++)
			{
				if(coorx[tmpx[i]] == 1)
				{
					ansx = tmpx[i];
				}
			}
			cin>>tmpy[i];
			coory[tmpy[i]]++;
			for(ll i= 0 ;i<3;i++)
			{
				if(coory[tmpy[i]] == 1)
				{
					ansy = tmpy[i];
				}
			}
		}
		cout<<ansx<<" "<<ansy<<endl;
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
