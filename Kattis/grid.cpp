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
ll n,m;
ll StepX[4] = {1, -1, 0, 0};
ll StepY[4] = {0, 0, 1, -1};
ll a[505][505];
string s;
bool ok = 0;
//-----------------------------

void Try(ll x, ll y, ok)w
{
	ll k = -1;
	ll step = a[x][y];
	do
	{
		k++;
		ok = false;
		ll u = x + StepX[k]*step;
		ll v = y + StepY[k]*step;
		if((u>=0 && u < m) && (v>=0 && v < n)
		{
			
		}
	}
	
}

void Solves()
{
	cin>>n>>m;
	for(ll i= 0 ;i<n;i++)
	{
		cin>>s;
		for(ll j=0 ; j<m;j++)
		{
			a[i][j] = s[j] - 48;
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
