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
ll n, Count=0;
ll Prob[2];
//-----------------------------

void Solves()
{
	cin>>n;
	ll a;
	while(n>0)
	{	
		for(ll i=0;i<3;i++)
		{
			cin>>a;
			Prob[a]++;
		}
		if(Prob[1]>1)
			Count++;
		Prob[0] = Prob[1]=0;	
		n--;
	}
	cout<<Count<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
