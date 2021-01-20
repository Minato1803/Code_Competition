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
ll n,k;
string s;
ll let[123] = {0};
//-----------------------------
void Solves()
{
	cin>>n>>k;
	cin>>s;
	for(ll i = 0;i<s.length();i++)
	{
		let[s[i]]++;
	}
	for(ll i = 97;i<=122;i++)
	{
		if(k>0)
		{
			if(let[i]<=k)
			{
				k-=let[i];
				let[i] = 0;
			}
			else
			{
				let[i]-=k;
				break;
			}
		}
		else
			break;
	}
	string ans = "";
	for(ll i = s.length()-1;i>=0;i--)
	{
		if(let[s[i]]>0)
		{
			ans+=s[i];
			let[s[i]]--;
		}
	}
	if(ans.length() == 0)
	{
		cout<<"";
		return;
	}
	for(ll i = ans.length()-1;i>=0;i--)
	{
		cout<<ans[i];
	}
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
