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
ll t,x;
ll ans[105]={0};
//-----------------------------
void Step()
{
	ans[0]=1;
	ans[1]=1;
	for(ll i=2;i<=100;i++)
	{
		ans[i]+=ans[i-1]+ans[i-2];
	}
}
void Solves()
{
	scanf("%lld",&t);
	Step();
	while(t>0)
	{
		scanf("%lld",&x);
		printf("%lld\n",ans[x]);
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
