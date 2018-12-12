#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output2.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================
ll n,q;
vector< pair<ll,ll> > line;
bool check(ll point,ll posSt)
{
	for(ll i=posSt;i<point;i++)
	{
		if(line[point].first>=line[i].first&&line[point].second>=line[i].first)
			if(line[point].second<=line[i].second)
				return 1;
	}
	return 0;
}
void Solves()
{
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		line.push_back(make_pair(a,b));
	}	
	sort(line.begin(),line.end());
//	for(ll i=0;i<line.size();i++)
//	{
//		cout<<line[i].first<<" "<<line[i].second<<endl;
//	}
	cin>>q;	
	for(ll Q=0;Q<q;Q++)
	{
		ll l,r,posSt=-1,posEnd=-1;
		cin>>l>>r;
		for(ll i=0;i<line.size();i++)
		{
			if(l<line[i].first)
			{
				posSt=i-1;
				break;
			}	
			if(l==line[line.size()-1].first)
				posSt = line.size()-1;	
		}
		for(ll i=0;i<line.size();i++)
		{
			if(r<line[i].second&&(i-1)>=posSt)
			{
				posEnd=i-1;
				break;
			}
				if(r==line[line.size()-1].second&&line.size()-1>=posSt)
					posEnd = line.size()-1;
		}
//		cout<<posSt<<"****"<<posEnd<<endl;
		if(posEnd!=-1&&posSt!=-1)
		{
			ll result = posEnd-posSt+1;
			if(posEnd!=posSt)
			{
				for(ll i=posSt+1;i<=posEnd;i++)
				{
					if(check(i,posSt))
						result-=1;
				}
			}
			cout<<result<<endl;
		}
		else
			cout<<"-1"<<endl;	
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
