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
ll n,tmp=0,Count=1;
//-----------------------------

void Solves()
{
	cin>>n;
	ll a[n+5];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll Fst = a[n-1];
	for(ll i=n-1;i>=0;i--)
	{
//		cout<<tmp<<" "<<a[i]<<" first"<<endl;
		if(tmp==a[i])
		{
			tmp = a[i];
			Count++;
		}
		else
		{
			tmp = a[i];
			Count = 1;
		}
		
//		cout<<tmp<<" "<<a[i]<<" second"<<endl;
		if(Fst%a[i]==0&&Count==1)
		{
			a[i] = 0;
		}
		
	}
	sort(a,a+n);
	ll Snd = a[n-1];
	cout<<Fst<<" "<<Snd<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
