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
vector < queue <ll> > inhs (200000);
vector<pair<ll,ll> > inPut;
// fst nhan snd no
//-----------------------------


void Solves()
{
	cin>>n;
	int ans=0;
	ll pays[n+5] ={0};
	ll owes[n+5] = {0};
		ll it, money;
	for(ll i= 0;i<n;i++)
	{
		cin>>it>>money;
		inPut.push_back(make_pair(it,money));
		inhs[it].push(money);
	}

	for(int i=0;i<inPut.size();i++)
	{
		
		if(pays[i]<inPut[i].second)
		{
			if(!inhs[i+1].empty())
			{
				ans+=inhs[i+1].front();
				inhs[i+1].pop();
			cout<<"bug1 "<<i<<" "<<ans<<endl;
			}
			else
			{
				ans+=inhs[inPut[i].first].front();
				inhs[inPut[i].first].pop();
			cout<<"bug2 "<<i<<" "<<ans<<endl;
			}
				pays[inPut[i].first-1]+=inPut[i].second;
		}
		else
		{
			inhs[i+1].front()-=inPut[i].second;
			inhs[inPut[i].first].pop();
		}
	}
	cout<<ans;
	
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
