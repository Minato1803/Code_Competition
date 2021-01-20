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
ll t,n;
string s="";
//-----------------------------

void crt()
{
	char  tmp = 97;
	for(ll i = 0;i<200;i++)
	{
		s+=tmp;
		tmp++;
		if(tmp>122)
		{
			tmp = 97;
		}
	}
}

void Solves()
{
	crt();
//	cout<<s<<endl;
	cin>>t;
	while(t--)
	{
		vector <string> ans;
		string tmp;
		cin>>n;
		ll a[n+5];
		for(ll i = 0;i<n;i++)
		{
			cin>>a[i];
		}
		if(a[0] != 0)
		{
			tmp = s.substr(0,a[0]);
			ans.pb(tmp);
		}
		else
		{
			ans.pb("a");
		}
		for(ll i = 0;i<n;i++)
		{
			if(a[i] == 0)
			{
				ans.pb(s.substr(i+1,1));
				continue;
			}
			if(a[i] < ans[i].length())
			{
				tmp = ans[i].substr(0,a[i]);
//				cout<<"tmp: "<<tmp<<" "<<i<<endl;
				ans.pb(tmp);
				continue;
			}
			if(a[i] > ans[i].length())
			{
//				cout<<a[i]<<" "<<ans[i].length()<<endl;
				ans[i]+=s.substr(0,a[i] - ans[i].length());
			}
			tmp = ans[i]+"a";
			ans.pb(tmp);
		}
		for(ll i = 0;i<ans.size();i++)
		{
			cout<<ans[i]<<endl;
		}
		
	}
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
