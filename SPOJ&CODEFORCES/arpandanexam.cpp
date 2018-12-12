//http://codeforces.com/gym/228920/problem/F
#include <bits/stdc++.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixced<<setprecision(x)

//====================================================================================================

bool vectors(ll ax,ll ay,ll bx,ll by, ll cx, ll cy)
{
	if((ax==bx&&bx==cx)||(ay==by&&by==cy))
		return 0;
		
	ll vectorx=-(bx-ax), vectory= by-ay;
	if(-vectory*cy==vectorx*cx+(vectorx*(-ax)+vectory*(-ay)))
		return 0;
	else
		return 1;		
}
db AB(ll ax,ll bx, ll ay, ll by)
{
	return sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll ax,ay,bx,by,cx,cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	db a = AB(ax,bx,ay,by) , b = AB(bx,cx,by,cy);
	
	if(bx==0&&by==0)
	{
		if(ax+cx==0&&ay+cy==0)
		{
			cout<<"No";
			return 0;
		}
	}
	
	if(a==b&&vectors(ax,ay,bx,by,cx,cy))
	{
		cout<<"Yes";
	}
	else cout<<"No";
	return 0;
}
