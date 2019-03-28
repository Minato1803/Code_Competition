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
vector <ll> PTwo;
ll n,k;
//-----------------------------

void Solves()
{
	cin>>n>>k;
	if(n<k||(k==2 && n%k!=0))
	{
		cout<<"NO"<<endl;
		return;
	}
	else
	{
		
		if(k==1)
		{
			for(ll i=0;i<=30;i++)
			{
				if(n==2<<(i-1))
				{
					cout<<"YES"<<endl;
					cout<<n<<endl;
					return;
				}
			}
			cout<<"NO"<<endl;
			return;
		}
		else
			if(n==k)
			{
				cout<<"YES"<<endl;
				for(ll i=0;i<k;i++)
					cout<<1<<" ";
				return;	
			}
			else	
			{
				cout<<"YES"<<endl;
				if((n&1)==1)
				{
					cout<<"1 ";
					n--;
					k--;
				}
				if(((n/k) & ((n/k) - 1)) == 0 && n%k==0)
				{
					for(ll i=0;i<k;i++)
						cout<<n/k<<" ";
					return;	
				}
				for(ll i=0;i<k-1;i++)
				{
					PTwo.pb(1);
					n-=1;
				}
				while((n&(n-1))!=0)
				{
					for(ll i=k-2;i>=0;i--)
					{
						n-=(PTwo[i]*2-PTwo[i]);
						PTwo[i]*=2;
						if((n&(n-1))==0)
							break;
					}
				}	
				PTwo.pb(n);
				sort(PTwo.begin(),PTwo.end());
				for(ll i=0;i<PTwo.size();i++)
				{
					cout<<PTwo[i]<<" ";
				}			
			}
			
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
