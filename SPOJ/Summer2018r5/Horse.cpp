#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/input.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
struct  coor
{
	ll x,y,countt;
	coor()
	{
		countt=0;
	}
	coor(ll X, ll Y,ll Count)
	{
		x=X;
		y=Y;
		countt=Count;
	}
};
ll a[2000][2000];
ll m, n, ax , ay , bx , by;
ll clc[8]={-2,-2,-1,-1,1,1,2,2};
ll cld[8]={-1,1,-2,2,-2,2,-1,1};

//-----------------------------

void Solves()
{
   queue <coor> Q;
    cin >> n >> m;
    cin >> ax>>ay;
    cin >> bx>>by;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            a[i][j]=0;
 
    Q.push(coor(ax,ay,0));
    a[ax][ay]=1;
 
    while (!Q.empty())
    {
        coor tmp = Q.front();
        Q.pop();
        for (ll k=0; k<8; k++)
        {
            ll x = cld[k]+tmp.x;
            ll y = clc[k]+tmp.y;
            if (1<=x && x <=n && 1<=y && y<=m && a[x][y]==0)
            {
                a[x][y]=1;
                Q.push(coor(x,y,tmp.countt+1));
                if (x==bx && y==by)
                {
                    cout << tmp.countt+1;
                    return;
                }
            }
        }
    }
    cout << -1;
	
}

int main()
{
    buff;
    Input;
//    Output;
    Solves();
    return 0;
}
