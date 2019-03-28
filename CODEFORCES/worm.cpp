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
ll n,m;
vector< ll> line;
//-----------------------------

void Solves()
{
	cin>>n;
	ll a;
	cin>>a;
	line.pb(a);
	for(ll i=1;i<n;i++)
	{
		cin>>a;
		line.pb(a + line[i-1]);  
	}
	cin>>m;
	vector<ll>::iterator low;
	for(ll i=0;i<m;i++)
	{
		cin>>a;
		low = lower_bound (line.begin(), line.end(),a);
		cout << (low- line.begin()+1)<<endl;
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
