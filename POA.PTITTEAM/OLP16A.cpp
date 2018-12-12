#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================

vector <ll> trash;
vector <ll> pos;
ll n,t,Count=0,sum=1;
ll ans=0;
ll result[1000005];

void Solves()
{
	result[0]=0;
	for(ll i=1;i<=1000000;i++)
		result[i]+=(i+result[i-1]);
	cin>>n>>t;
	ll a[n+5];
	for(ll i=0;i<n;i++)
		cin>>a[i];	
	if(a[0]<=t)
	{
		Count=a[0];
		trash.push_back(a[0]);
	}
    for(ll i=1;i<n;i++)
	{
		if(Count+a[i]<=t)
		{
			trash.push_back(a[i]);
			Count+=a[i];
		}
		else
		{
//			cout<<Count<<" "<<result[trash.size()]<<endl;
			ans+=result[trash.size()];
			Count=0;
			trash.clear();
//			if(a[i-1]+a[i]<=t)
//			{
//				
//				Count=a[i-1];
//				trash.push_back(a[i-1]);
//				i--;
//				ans-=1;
//				continue;
//			}
//			else
			pos.push_back(i);
			 if(a[i]<=t)
				{
					i--;
					continue;
				}
		}
	}
	 for(ll i=0;i<pos.size();i++)
	 {
	 	if(pos[i]!=0&&a[pos[i]]!=t)
	 	{
			 ll Countpos=a[pos[i]];
			 for(ll j=pos[i]-1;j>0;j--)
	 		{
	 			Countpos+=a[j];
				if(Countpos>t)
	 				break;
	 			else
				 	ans++;	
			}
		}
	 }
	cout<<ans+result[trash.size()];                                                                                                                                                                                                                                        
}

int main()
{
    buff;
    //Input;
//    Output;
    Solves();
    //						5 10
    //						2 8 2 8 2
    //						5 10
    //						1 2 1 1 6
    //						5 10
    //						10 10 10 10 10
    
    return 0;
}
