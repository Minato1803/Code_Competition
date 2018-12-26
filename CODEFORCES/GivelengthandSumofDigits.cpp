
#include <bits/stdc++.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixed<<setprecision(x)

//====================================================================================================
bool cmp(ll a,ll b)
{
	return a>b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
		ll m,s;
		cin>>m>>s;
		ll a[m+5]={0};
		if(s==0||s>m)
		{
			cout<<-1<<" "<<-1;
			return 0;
		}
		ll tmp=9;
		loop:
		ll cost=s;
		for(ll i=0;i<m;i++)
		{
			if(cost-tmp>0)
			{
				a[i]=tmp;
				cost-=tmp;
			}
			else
			{
				a[i]=cost;
				break;			
			}
			
		}
		if(a[m-1]<0)
		{
			tmp--;
			goto loop;
		}
	sort(a,a+m);
	if(a[0]==0)
		for(ll i=0;i<m;i++)
			if(a[i]!=0)
			{
				swap(a[0],a[i]);
				break;
			}
				
	for(ll i=0;i<m;i++)
		cout<<a[i];
	cout<<" ";
	sort(a,a+m,cmp);
	for(ll i=0;i<m;i++)
		cout<<a[i];
	return 0;
}
