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
struct Node
{
	ll lazy;
	ll val;
} nodes[400005];
//-----------------------------

void Lazy(ll id)
{
	ll t = nodes[id].lazy;
	nodes[id*2].lazy +=t;
	nodes[id*2].val +=t;
	
	node[id*2+1].lazy+=t;
	nodes[id*2+1].val+=t;
	
	nodes[id].lazy=0;
}

void update(ll id, ll l, ll r, ll u, ll v, ll val)
{
	if(v<l||r<u)
	{
		return;
	}
	if(u<=l&&r<=v)
	{
		node[id].val+=val;
		node[id].lazy+=val;
		return;
	}
	ll mid = (l+r)/2;
	down(id);
	
	update(id*2,l,mid,u,v,val);
	update(id*2+1,mid+1,r,u,v,val);
	nodes[id].val = max(node[id*2].val,nodes[id*2+1].val);
}

ll get(ll id,ll l, ll r, ll u, ll v)
{
	if(v<l||r<u)
	{
		return -INFINITY;
	}
	
	if(u<=l&&r<=v)
	{
		return nodes[id].val;
	}
	ll mid = (l+r)/2;
	down(id);
	return max(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
}

void Solves()
{
	cin>>n;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
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
