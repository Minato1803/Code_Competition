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
ll t;
ll n,k;
//-----------------------------

void Solves()
{
	ll a[65];
	ll pos[65];
	a[1] = 1;
	for(ll i=2;i<=63;i++)
	{
		a[i]= a[i-1]*2+1;
	}
	pos[1]=1;
	pos[2]=2;
	for(ll i=3;i<=63;i++)
	{
		pos[i]=1+a[i-1];
	}
	cin>>t;
	while(t>0)
	{
		cin>>n>>k;
		if(k%2!=0)
		{
			cout<<1<<endl;
//			continue;
		}
		else
		{
			for(ll i=1;i<=63;i++)
			{
				if(k==pos[i])
				{
					cout<<i<<endl;
					goto loop;
				}
			}
//			cout<<pos[2]<<" "<<a[2]<<endl;
			for(ll i=1;i<=63;i++)
			{
				if((k-pos[i])%(a[i]+1)==0)
				{	
					cout<<i<<endl;
					break;
				}
					
			}
		}	
			loop:
			t--;
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
