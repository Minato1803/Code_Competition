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
string s;
ll ans = 0;
char pos = 'a';
//-----------------------------
void Solves()
{
	cin>>s;
	for(ll i = 0;i<s.length();i++)
	{
//		cout<<((pos-s[i])+26)<<" "<<(s[i]-pos)%26<<endl;
		ll right = s[i]-pos<0?s[i]-pos+26:s[i]-pos;
		ll left = pos-s[i]<0?pos-s[i] + 26: pos-s[i];
//		cout<<left<<" "<<right<<endl;
		ans += min(left, right);
		pos = s[i];
	}
	cout<<ans<<endl;
}


int main()
{
    buff;
   /* Input;
    Output;*/
    
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
