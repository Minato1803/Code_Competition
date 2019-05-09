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
ll t,n ;
ll Num[7];
ll x[10] = {0};
bool check =1;
//-----------------------------

void cases()
{
	int i= 5;
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
		cin>>n;
		ll Sum=n;
		for(ll i=1;i<=5;i++)
			cin>>Num[i];
//		for(ll i=1;i<=5;i++)
//		{
//			tmp = n/Num[i]+1;
//			n-= tmp;
//		}
//		for(ll i=1;i<=4;i++)
//		{
//			for(ll j=i+1;j<=5;j++)
//			{
//				ll Numer =Num[i]*Num[j];
//				tmp = n/Numer+1;
//				n+=tmp;	
//			}
//		}	
		while(check)
		{
			cases();
			ll Numer =1;
			ll  Count=0;
//			for(ll i=1;i<=5;i++)
//			cout<<x[i]<<" ";
//			cout<<endl;	
			//vector <ll> point;
			for(ll i=1;i<=5;i++)
			{
				
				if(x[i]==1)
				{
					Count++;
					Numer *=Num[i];
//					 point.pb(Num[i]);
				}
			}
			ll tmp = Sum/Numer;
//			cout<<"point: ";
//			for(ll i=0;i<point.size();i++)
//				cout<<point[i]<<" ";
//				cout<<"tmp: ";
//			cout<<tmp<<endl;
			if(Count!=0)
				Count%2!=0?n-=tmp:n+=tmp;
		}
		check=1;
		ms(x,0);
		cout<<n<<endl;
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
