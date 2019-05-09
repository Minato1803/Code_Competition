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
ll q,a,b,c,d;
string s;
ll Count[500005][26] ={0};
//-----------------------------

void Solves()
{
	cin>>s;
	Count[0][s[0]-97]=1;
	for(ll i=1;i<s.length();i++)
	{
		Count[i][s[i]-97]++;
		for(ll j=0;j<=25;j++)
		{
			Count[i][j]+=Count[i-1][j];
		}
	}
	cin>>q;
	while(q--)
	{
		cin>>a>>b>>c>>d;
		for(ll i=0;i<=25;i++)
		{
			if(Count[b-1][i]-Count[a-2][i]!=Count[d-1][i]-Count[c-2][i])
			{
				cout<<"NO"<<endl;
				goto end;
			}
		}
			cout<<"YES"<<endl;
		end:;
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
