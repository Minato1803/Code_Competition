//
#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define db              double
#define fix_set(x)      fixed<<setprecision(x)
#define buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input			freopen("input.in", "r", stdin)
#define output			freopen("output.out", "w", stdout)

//====================================================================================================

ll c,p,x,l; 
ll pairs[200000][200000];

void leff(ll a,ll c)
{
	for(ll i=1;i<=c;i++)
	{
		if(pairs[a][i]!=0)
		{
			pairs[a][i]=0;
			pairs[i][a]=0;
		}
	}
}
void Solves()
{
//	ll c,p,x,l;
	cin>>c>>p>>x>>l;
//	ll pairs[c+5][c+5];
	for(ll i=1;i<=c;i++)
		for(ll j=1;j<=c;j++)
			pairs[i][j]=0;
			
	for(ll i=0;i<p;i++)
	{
		ll a,b;
		cin>>a>>b;
		pairs[a][b]++;
	}
	if(x==l)
	{
		cout<<"leave";
		return;
	}
	ll left = c-1;
	leff(l,c);
	for(ll i=1;i<=c;i++)
	{
		ll count=0;
		for(ll j=1;j<=c;j++)
		{
			if(pairs[i][j]!=0) count+=1;
			if(pairs[j][i]!=0) count+=1;
			if(count>left/2) break;
		}
		if(count<=left/2)
		{
			left-=1;
			leff(i,c);
		}
	}
	ll dem=0;
	for(ll i=1;i<=c;i++)
	{
		if(pairs[i][x]!=0) dem+=1;
			if(pairs[x][i]!=0) dem+=1;
			if(dem>left/2)
			{
				cout<<"stay";
				return;
			}
	}
	if(dem<=left/2)
		{
			cout<<"leave";
			return;
		}
}

int main()
{
    buff;
//    input; output;
	Solves();
    return 0;
}
