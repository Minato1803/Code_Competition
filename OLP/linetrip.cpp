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
set <ll> path;
set <ll> ::iterator it;
//-----------------------------

void Solves()
{
	cin>>n;
	ll a;
	for(ll i=0;i<n;i++)
	{
		cin>>a;
		path.insert(a);
	}
	ll sum =0;
//	cout<<*path.begin()<<" "<<*path.rbegin()<<endl;
	if(*path.begin()<0&&*path.rbegin()>=0)
		sum+=abs(*path.begin())*2;
	sum+= abs((*path.rbegin())*2);
	cout<<sum<<endl; 
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
