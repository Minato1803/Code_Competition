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
ll Qc, Qr, Kc,Kr,Dc,Dr;
//-----------------------------

void Solves()
{
	cin>>n>>Qc>>Qr>>Kc>>Kr>>Dc>>Dr;
	ll row, col;
	if(Kc>=Qc&&Kr<=Qr)
	{
		for(ll i=Qr-1;i>=1;i--)
			for(ll j=Qc+1;j<=n;j++)
			{
				if(j==Dc&&i==Dr)
				{
					cout<<"YES"<<endl;
					return;
				}
			} 
		cout<<"NO"<<endl;	
	} 
	else
	{
		if(Kc<=Qc&&Kr<=Qr)
		{
			for(ll i=Qr-1;i>=1;i--)
				for(ll j=Qc-1;j>=1;j--)
				{
					if(j==Dc&&i==Dr)
					{
						cout<<"YES"<<endl;
						return;
					}
				}	 
		cout<<"NO"<<endl;
		}
		else
		{
			if(Kc<=Qc&&Kr>=Qr)
			{
				for(ll i=Qr+1;i<=n;i++)
					for(ll j=Qc-1;j>=1;j--)
					{
						if(j==Dc&&i==Dr)
						{
							cout<<"YES"<<endl;
							return;
						}
					}	 
				cout<<"NO"<<endl;
			}
			else
			{
				if(Kc>=Qc&&Kr>=Qr)
				{	
					for(ll i=Qr+1;i<=n;i++)
						for(ll j=Qc+1;j<=n;j++)
						{
							if(j==Dc&&i==Dr)
							{
								cout<<"YES"<<endl;
								return;
							}
						}	 
					cout<<"NO"<<endl;
				}
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
