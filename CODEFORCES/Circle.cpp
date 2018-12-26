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

//====================================================================================================
string s;
vector < pair<char,ll> > alpha; 
//-----------------------------

void Solves()
{
	ll Count=0;
	cin>>s;
	for(ll i=0;i<s.length();i++)
		alpha.push_back(make_pair(s[i],i+1));
	sort(alpha.begin(),alpha.end());
	for(ll i=0;i<=52;i+=2)
	{
		map <char,ll> check;
		for(ll j=alpha[i].second+1;j<alpha[i+1].second;j++)
			check[s[j-1]]++;
		for(char k=alpha[i].first;k<='Z';k++)
			if(check[k]==1)
				Count++;
		check.clear();
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
