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
ll r,c,n;
char defaults[205][205], allbomb[205][205], case1[205][205],case2[205][205];
//-----------------------------

void result(char ans[][205])
{
	for(ll i = 0;i<c;i++)
	{
		for(ll j = 0;j<r;j++)
		{
			cout<<ans[i][j];
		}
		cout<<endl;
	}
}

void Solves()
{
	cin>>c>>r>>n;
	for(ll i = 0;i<c;i++)
	{
		for(ll j = 0;j<r;j++)
		{
			cin>>defaults[i][j];
		}
	}
	for(ll i = 0;i<c;i++)
	{
		for(ll j = 0;j<r;j++)
		{
			allbomb[i][j] = 'O';
			case1[i][j] = 'O';
			case2[i][j] = 'O';
		}
	}
	for(ll i = 0;i<c;i++)
	{
		for(ll j = 0;j<r;j++)
		{
			if(defaults[i][j] == 'O')
			{
				if (i>0)    case1[i-1][j]='.';
                if (i<c-1)    case1[i+1][j]='.';
                if (j>0)    case1[i][j-1]='.';
                if (j<r-1) case1[i][j+1]='.';
                case1[i][j]='.';
			}
		}
	}
	for(ll i = 0;i<c;i++)
	{
		for(ll j = 0;j<r;j++)
		{
			if(case1[i][j] == 'O')
			{
				if (i>0)    case2[i-1][j]='.';
                if (i<c-1)    case2[i+1][j]='.';
                if (j>0)    case2[i][j-1]='.';
                if (j<r-1) case2[i][j+1]='.';
                case2[i][j]='.';
			}
		}
	}
	if(n==1)
	{
		result(defaults);
	}
	else if(n%2 == 0)
	{
		result(allbomb);
	}
	else if(n%4 == 3)
	{
		result(case1);
	}
	else 
	{
		result(case2);
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
