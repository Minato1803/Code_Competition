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
string s = "";
//-----------------------------

void Solves()
{
	cin>>n;
	string q;
	ll a;
	for(ll i= 0;i<n;i++)
	{
		cin>>q>>a;
		if(q == "push_back")
		{
			s += (a+48);
		}
		else if(q == "push_front")
		{
			s.insert(0,1,a+48);
		}
		else if(q == "push_middle")
		{
			ll mid;
//			if(s.length()% 2 == 0)
				mid = (s.length()+1)/2;
//			else
//				mid =  s.length()/2+1;
			s.insert(mid,1, a+48);
		}
		else if(q == "get")
		{
			cout<<s[a]<<endl;
		}
//		cout<<s<<endl;
		
	}
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
