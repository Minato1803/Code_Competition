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
ll t;
string s;
	ll alp[50005][27];
//-----------------------------
bool check(ll a, ll b, ll c, ll d)
{
//	bool dif=0;
	for(ll i=0;i<=25;i++)
	{
		if((alp[b-1][i]-alp[a-2][i] )!=(alp[d-1][i]-alp[c-2][i]))
			return 0;
	}
	return 1;
}

void Solves()
{
	cin>>s;
	memset(alp,0,sizeof(alp));
	alp[0][s[0]-97]++;
	for(ll i=1;i<s.length();i++)
	{
		
		alp[i][s[i]-97]++;
		for(ll j = 0; j <= 25;j++)
			alp[i][j] += alp[i-1][j];
		
	}
	cin>>t;
	ll a,b,c,d;
	string fst;
	string snd;
	while(t>0)
	{
//		cin>>a>>b>>c>>d;
		scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
//		fst = s.substr(a-1,b-a+1);
//		snd = s.substr(c-1,d-c+1);
//		sort(fst.begin(),fst.end());
//		sort(snd.begin(),snd.end());
//		cout<<fst<<" "<<snd<<endl;
		if(check(a,b,c,d))
			printf("YES\n");
		else
			printf("NO\n");	
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
