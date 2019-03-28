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
set <ll> a;
map <ll,ll> Count;
bool check =0;
//-----------------------------

void Solves()
{
	cin>>n;
	ll tmp;
	for(ll i=0;i<n;i++)
	{
		cin>>tmp;
		a.insert(tmp);
		Count[tmp]++;
	}
	ll FstNum=*a.begin(), SndNum=*a.rbegin();
	map <ll,ll> ::iterator temp = Count.begin();
	for(;temp!=Count.end();temp++)
	{
		if((*temp).second!=2)
		{
			check=1;
			break;
		}
	}
	if(check==0)
	{
		cout<<SndNum<<" "<<SndNum<<endl;
		return;
	}
	if(a.size()==2)
	{
		cout<<FstNum<<" "<<SndNum<<endl;
	}
	else
	{
		set <ll> ::iterator it = a.begin();
		it++;
		for (;it!=a.end();it++)
		{ 
			if(*it%FstNum==0&&*it!=SndNum)
			{
				if(SndNum%*it!=0)
					FstNum=*it;
			}
			else
			{
				SndNum = *it;
			}
		}
		cout<<FstNum<<" "<<SndNum<<endl;
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
