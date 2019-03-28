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
map <ll,ll> soldier;
ll pc, lc;
ll key,ps;
map <ll,ll> :: iterator it;
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
				soldier[ps]++;	
				break;
			}
			case 2:
			{
				scanf("%lld",&ps);
				soldier[ps]--;
				break;
			}	
			case 3:
			{
				scanf("%lld%lld",&pc,&lc);
				it = soldier.begin();
				ans=0;
				while(it!=soldier.end())
				{
					if((*it).first ^ pc < lc)
					{
//						cout<<(*it).first<<" "<<(*it).second<<" "<<i<<endl;
						ans+=(*it).second;
					}
					it++;		
				}
				printf("%lld\n",ans);
				break;
			}	
		}
	}
	}

int main()
{
    //buff;
    Input;
    Output;
    Solves();
    return 0;
}
