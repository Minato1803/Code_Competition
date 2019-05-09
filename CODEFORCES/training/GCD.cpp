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
map <ll,ll> Count;
map <ll,ll>:: iterator it;
vector <ll> ans;
//-----------------------------

bool cmp(ll a,ll b)
{
	return a>b;
}

void Solves()
{
	cin>>n;
	ll Num[n*n+5];
	for(ll i=0;i<n*n;i++)
	{
		cin>>Num[i];
		Count[Num[i]]++;
	}
	sort(Num,Num+(n*n),cmp);
	for(ll i=0;i<n*n;i++)
		cout<<Num[i]<<" ";
	cout<<endl;	
	for(ll i=0;i<n*n;i++)
	{
		if(Count[Num[i]]>0)
		{
			Count[Num[i]]--;
			ans.pb(Num[i]);
			for(ll j=0;j<ans.size()-1;j++)
			{
				ll tmp = __gcd(Num[j],Num[ans.size()-1]);
				cout<<tmp<<endl;
				Count[tmp]-=2;
			}
		}
	}
	for(it = Count.begin();it!=Count.end();it++)
		cout<<it->first<<" "<<it->second<<endl;
	for(ll i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
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
