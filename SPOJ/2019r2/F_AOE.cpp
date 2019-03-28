#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
ll q;
vector< map <ll,ll> >soldier;
map <ll,ll> soldierTmp;
vector <ll> pc,lc;
ll tpc, tlc;
ll key,ps;
vector< map <ll,ll> > :: iterator it;
ll ans=0;
//-----------------------------
void Solves()
{
	scanf("%lld",&q);
	for(ll i=0;i<q;i++)
	{
		scanf("%lld",&key);
		switch(key)
		{
			case 1:
			{
				scanf("%lld",&ps);
				soldierTmp[ps]++;	
				break;
			}
			case 2:
			{
				scanf("%lld",&ps);
				soldierTmp[ps]--;
				break;
			}	
			case 3:
			{
				scanf("%lld%lld",&tpc,&tlc);
				pc.pb(tpc);
				lc.pb(tlc);
				soldier.pb(soldierTmp);
				break;
			}	
		}
	}
	ll i=0;
	for(it = soldier.begin(); it != soldier.end();++it)
	{
		ans=0;
    	for(auto it1=it->begin();it1!=it->end();++it1)
		{
//        	cout << it1->first << " " << it->second << endl; 
			if(((*it1).first^pc[i])<lc[i])
			{
				ans+=(*it1).second;
			}	
    	}
			printf("%lld\n",ans);
			i++;
	}			
}

int main()
{
//    buff;
    Input;
    Output;
    Solves();
    return 0;
}
