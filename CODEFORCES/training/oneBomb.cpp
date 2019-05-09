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
string s[1005];
ll row[1005]={0},col[1005]={0},n,m;
ll Countw=0,poscow=0,poscol=0;

//-----------------------------

void Solves()
{
	cin>>n>>m;
	for(ll i=0;i<n;i++)
		cin>>s[i];
	for(ll i=0;i<n;i++)
	{
		for(ll j=s[i].find("*");j<s[i].length();j++)
		{
			if(s[i][j]=='*')
			{
				Countw++;
				row[i]++;
				col[j]++;				
			}	
		}
	}
//	cout<<Countw<<"+++"<<endl;
	for(ll i=0;i<n;i++)
	{
//		cout<<s[i]<<endl;
		for(ll j=s[i].find("*");j<s[i].length();j++)
		{
			if(row[i]!=0&&col[j]!=0)
			{
				if((row[i]+col[j]-1 == Countw)||(row[i]+col[j] == Countw))
				{
//					cout<<i<<" "<<j<<endl;
					poscow=i+1;
					poscol=j+1;
				}
			}
		}

	}
		if(poscow!=0&&poscol!=0)
		{
			cout<<"YES"<<endl;
			cout<<poscow<<" "<<poscol;
		}
		else
		{
			cout<<"NO"<<endl;
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
