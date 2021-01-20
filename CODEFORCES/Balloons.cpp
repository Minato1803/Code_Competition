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
map<ll,ll> pos;
//-----------------------------
void Solves()
{
	cin>>n;
	ll a[n+5];
	ll summ = 0;
	for(ll i = 0;i<n;i++)
	{
		cin>>a[i];
		pos[a[i]] = i+1;
		summ+=a[i];
	}
	sort(a,a+n);
	if(n<=1 || summ - a[0] == a[0])
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<n-1<<endl;
		if(pos[a[0]] > 1)
		{
//			cout<<"bugg"<<pos[a[0]]<<endl;
			cout<<1<<" ";
		}
		for(ll i =1;i<n;i++)
		{
			if(pos[a[0]] == i+1)
				continue;
			cout<<i+1<<" ";	
		}
		cout<<endl;
	}
}


int main()
{
    buff;
//   Input;
//    Output;
    
    /*clock_t start, end;
    	double time_use;
    start = clock();
    	Solves();
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%f seconds", time_use);*/
    
    Solves();


    return 0;
}
