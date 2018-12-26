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

//====================================================================================================
ll t;
ll k;
struct point
{
	db x;
	db y;
};

//-----------------------------

db len(db ax,db ay,db bx,db by)
{
	return sqrt((by-ay)*(by-ay) + (bx-ax)*(bx-ax));
}

db Heron(db a,db b,db c)
{
	return (a+b+c)/2;
}

void Solves()
{
	cin>>t;
	point a,b,c,d,e;
	while(t>0)
	{
		cin>>k;
		cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y>>d.x>>d.y;
		db Sabc=0,AB=len(a.x,a.y,b.x,b.y),AC=len(a.x,a.y,c.x,c.y),BC=len(b.x,b.y,c.x,c.y);
		db p = Heron(AB,AC,BC);
		Sabc = k*sqrt(p*(p-AC)*(p-AB)*(p-bc));
		Sac*=Sabc;
		db AD=len(a.x,a.y,d.x,d.y);
		
		
	}
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
