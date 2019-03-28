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
ll n;
map <ll,ll> Count;
set <ll> Num;
set <ll> ::iterator it;

vector <ll> v;
//-----------------------------

void Solves()
{
	cin>>n;
	ll a;
	for(ll i=0;i<n;i++)
	{
		cin>>a;
		Count[a]++;
		Num.insert(a);
	}
	if(Num.size()==1||n==2)
	{
		cout<<0<<endl;
		return;
	}
	ll Minn=0, Maxx=0;
	for (it=Num.begin(); it!=Num.end(); ++it)
    {
    	v.pb(*it);
	}	
	if(Count[v[0]]==1&&Count[v[v.size()-1]]>=2)
	{
		Minn= v[1];
		Maxx = v[v.size()-1];
//		cout<<Minn<<" "<<Maxx<<endl;
		Maxx-=Minn;	
	}
	else
		if(Count[v[0]]>=2&&Count[v[v.size()-1]]==1)
		{
			Minn= v[0];
			Maxx = v[v.size()-2];
//		cout<<Minn<<" "<<Maxx<<endl;
			Maxx-=Minn;
		}
		else
			if(Count[v[0]]==1&&Count[v[v.size()-1]]==1)
			{
				Minn=v[v.size()-2]-v[0];
				Maxx = v[v.size()-1] - v[1];
//		cout<<Minn<<" "<<Maxx<<"***"<<endl;
				Maxx =  min(Minn,Maxx);
			}
			else
				Maxx = v[v.size()-1] - v[0]; 
	cout<<Maxx<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
