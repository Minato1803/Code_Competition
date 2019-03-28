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

void Solves()
{
	cin>>n;
	ll alp[n+5][28];
	ms(alp,0);
	for(ll i=0;i<n;i++)
	{
		cin>>s;
//		set <int> dif;
		for(ll j=0;j<s.length();j++)
		{
			alp[i][s[j]-97]++;
//			dif.insert(s[j]-97);
		}
//		if(dif.size()>2)
//			alp[i][27]=-1;
	}
	ll max=0;
	for(ll i=0;i<25;i++)
	{
		for(ll j=i+1;j<26;j++)
		{
			ll Count=0;
			for(ll it=0;it<n;it++)
			{
//				if(alp[it][27]==-1)
//				{
////					cout<<it<<"***"<<endl;	
//					continue;
//				}
				for(ll k=0;k<26;k++)
				{
					if(k!=i&&k!=j&&alp[it][k]!=0)
						goto skip;
				}
				Count+=alp[it][j]+alp[it][i];
				skip:;	
			}
//			cout<<i<<" "<<j<<" "<<Count<<endl;
			if(Count>max)
			{
				max=Count;
			}
		}
	}
	cout<<max<<endl;
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
