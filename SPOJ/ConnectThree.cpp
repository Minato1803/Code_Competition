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
vector <pair <ll,ll> > ans;
//-----------------------------

struct point
{
	ll x;
	ll y;
};

ll LengthPath(ll ax,ll ay,ll bx,ll by)
{
	return abs(bx-ax)+abs(by-ay);
}

void Walk(point Begin, point End)
{
	if(Begin.x==End.x&&Begin.y==End.y)
		return;
	if(Begin.x>End.x)
	{
		for(ll i = Begin.x-1;i>=End.x;i--)
			ans.push_back(make_pair(i,Begin.y));
	}
	else
	{
		for(ll i = Begin.x+1;i<=End.x;i++)
			ans.push_back(make_pair(i,Begin.y));
	}
	if(Begin.y>End.y)
	{
		for(ll i = Begin.y-1;i>=End.y;i--)
			ans.push_back(make_pair(End.x,i));
	}
	else
	{
		for(ll i = Begin.y+1;i<=End.y;i++)
			ans.push_back(make_pair(End.x,i));
	}
	
}

void Solves()
{
	point land[3];
	for(ll i=0;i<3;i++)
	{
		cin>>land[i].x>>land[i].y;
		ans.push_back(make_pair(land[i].x,land[i].y));
	}
	ll LenMin = 1e18;
	point CrossPoint;
	for(ll i=0;i<=1000;i++)
		for(ll j=0;j<=1000;j++)
		{
			ll tmp = LengthPath(i,j,land[0].x,land[0].y)+LengthPath(i,j,land[1].x,land[1].y)+LengthPath(i,j,land[2].x,land[2].y);
			if(tmp<LenMin)
			{
				LenMin=tmp;
				CrossPoint.x = i;
				CrossPoint.y = j;
			}
		}
////		ans.push_back(make_pair(CrossPoint.x,CrossPoint.y));
	for(ll i=0;i<3;i++)
		Walk(land[i],CrossPoint);
	sort(ans.begin(),ans.end());
	cout<<LenMin+1<<endl;	
	for(ll i=0;i<ans.size();i++)
	{
		if(ans[i].fst==ans[i+1].fst&&ans[i].snd==ans[i+1].snd)
			continue;
		cout<<ans[i].fst<<" "<<ans[i].snd<<endl;	
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
