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
struct NodeType
{
	ll value;
	ll sum;
	ll ymin,ymax;
};
NodeType nodes[205*4];
ll height[205];
struct Rectangle
{
	ll x1,x2,y1,y2;
};
Rectangle rects[105];
struct vert
{
	ll x;
	bool begin;
	ll id;
};
vert verticals[205];
ll horizon[205];
//-----------------------------

bool cmp(const vert& a,const vert& b)
{
	return a.x<b.x;
}

ll CreateInter(ll n)
{
	ll ys[205];
	for(ll i=0;i<n;i++)
	{
		verticals[2*i].x = rects[i].x1;
		verticals[2*i].begin = 1;
		verticals[2*i].id = i;
		verticals[2*i+1].x = rects[i].x2; 
		verticals[2*i].begin = 0;
		verticals[2*i].id = i;
		
		ys[2*i] = rects[i].y1;
		ys[2*i+1] = rects[i].y2;
	}
	sort(verticals,verticals+2*n,cmp);
	sort(ys,ys+2*n);
	
	ll k=0,y=-1;
	for(ll i=0;i<2*n;i++)
	{
		if(y!=ys[i])
		{
			horizon[k] = ys[i];
			y=ys[i];
			k++;
		}
	}
	return k-1;
}

void init_tree(ll node,ll left,ll right)
{
	nodes[node].value = 0;
	nodes[node].sum = 0;
	if(left==right)
	{
		nodes[node].ymin = horizon[left-1];
		nodes[node].ymax = horizon[left];
		return;
	}
	ll mid = (left+right)/2;
	init_tree(2*node,left,mid);
	init_tree(2*node+1,mid+1,right);
	
	nodes[node].ymin = nodes[2*node].ymin;
	nodes[node].ymax = nodes[2*node+1].ymax;
}

void increase(ll node, ll left, ll right, ll u, ll v)
{
	if(u>=nodes[node].ymax||v<=nodes[node].ymin)
		return;
	if(u<=nodes[node].ymin&&v>=nodes[node].ymax)
	{
		nodes[node].value++;
		nodes[node].sum = nodes[node].ymax - nodes[node].ymin;
		return;
	}
	ll mid = (left+right)/2;
	increase(2*node,left,mid,u,v);
	increase(2*node+1,mid+1,right,u,v);
	
	if(nodes[node].value==0)
		nodes[node].sum = nodes[2*node].sum + nodes[2*node+1].sum;
}

void decrease(ll node, ll left, ll right, ll u, ll v)
{
	if(u>=nodes[node].ymax||v<=nodes[node].ymin)
		return;
	if(u<=nodes[node].ymin&&v>=nodes[node].ymax)
	{
		nodes[node].value--;
		if(nodes[node].value==0)
		{
			if(left!=right)
				nodes[node].sum = nodes[2*node].sum+nodes[2*node+1].sum;
			else
				nodes[node].sum=0;	
		}
		return;
	}
	ll mid = (left+right)/2;
	decrease(2*node,left,mid,u,v);
	decrease(2*node+1,mid+1,right,u,v);
	
	if(nodes[node].value==0)
		nodes[node].sum = nodes[2*node].sum+nodes[2*node+1].sum;
}

void Solves()
{
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>rects[i].x1>>rects[i].x2>>rects[i].y2;
		rects[i].y1=0;
	}
	ll k = CreateInter(n);
		cout<<k<<endl;
	init_tree(1,1,k);
	ll result = 0;
	for(ll i=0;i<2*n-1;i++)
	{
		ll id = verticals[i].id;
		if(verticals[i].begin)
		{
			increase(1,1,k,rects[id].y1,rects[id].y2);
		}
		else
		{
			decrease(1,1,k,rects[id].y1,rects[id].y2);
		}
		result+=nodes[1].sum*(verticals[i+1].x-verticals[i].x);
	}	
	cout<<result<<endl;
}

int main()
{
    buff;
////    Input;
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
