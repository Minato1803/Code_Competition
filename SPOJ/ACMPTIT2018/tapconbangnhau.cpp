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
ll t,n;
ll x[25]={0};
bool check =1;
//-----------------------------

void cases()
{
	int i= n;
	while(i>0&&x[i]!=0)
	{
		x[i] = 0;
		i--;
	}
	if(i>0)
		x[i] = 1;
	else check = 0;	
}

void Solves()
{
	cin>>t;
	while(t--)
	{
		ms(x,0);
		check=1;
		map <ll,ll> value;
		cin>>n;
		ll a[n+5];
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		while(check)
		{
			cases();
			ll tmp=0;
//			for(ll i=1;i<=n;i++)
//			{
//				cout<<x[i]<<" ";
//			}	
//			cout<<endl;
			for(ll i=1;i<=n;i++)
			{
				tmp += a[i]*x[i];
			}	
			value[tmp]++;
			if(value[tmp]>1)
			{
				cout<<"YES"<<endl;
				goto loop;
			}
		}
		cout<<"NO"<<endl;
		loop:;
	}
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
