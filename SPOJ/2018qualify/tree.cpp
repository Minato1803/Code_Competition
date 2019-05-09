#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
ll n;
ll rawpos = 1;
ll tree[200005]={1}, pos[200005];

//-----------------------------
 
 void update(ll x)
 {
 	ll it=1,tmp = x;
 	while(pos[tmp]!=-1)
 	{
 		tmp = pos[tmp];
 		tree[tmp] += it+1;
		 it++; 
	}
 }
 
void Solves()
{
	scanf("%lld", &n);
//	for(ll i=1;i<=n;i++)
//	{
//		tree[i] = 1;
//	}
	pos[1] = -1;
	for(ll i=2;i<=n;i++)
	{
		scanf("%lld", &pos[i]);
		update(i);
	}
//	for(ll i=n;i>=2;i--)
//	{
//		tree[pos[i]]+=(tree[i]+1);
//	}
	for(ll i=1;i<=n;i++)
	{
		printf("%lld ", tree[i]);
	}
//		cout<<tree[i]<<" ";
}

int main()
{
//    buff;
    Input;
    Output;
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
