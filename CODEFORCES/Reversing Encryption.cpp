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
string s;
//-----------------------------

string pal(string s)
{
	string tmp = "";
	for(ll i  = s.length()-1;i>=0;i--)
	{
		tmp+=s[i];
	}
	return tmp;
}

void Solves()
{
	cin>>n;
	cin>>s;
	string ans = "";
	ll tmp = n;
	ans = pal(s);
	tmp/=2;
//	cout<<ans<<endl;
	while(tmp>1)
	{
		string tmpPal = pal(ans.substr(n/2,tmp));
		ans.erase(n/2,tmp);
//		cout<<tmp<<" "<<ans<<" "<<tmpPal<<endl;
		ans.insert(n/2,tmpPal);
		tmp/=2;
	}
	cout<<ans<<endl;
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
