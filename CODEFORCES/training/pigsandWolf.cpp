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
ll n,m,Count=0;
string s[15];
//-----------------------------

void Solves()
{
	cin>>n>>m;
	for(ll i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(ll i=0;i<n;i++)
	{	
		for(ll j=0;j<m;j++)
		{
			if(s[i][j]=='W')
			{
				
				if(i!=0&&s[i-1][j]=='P')
				{
					Count++;
					s[i-1][j] = '.';
				}	
				else if(j!=0&&s[i][j-1] == 'P')
					{
						Count++;
						s[i][j-1]='.';
					}
					else if(j!=m-1&&s[i][j+1]=='P')
						{
							Count++;
							s[i][j+1]='.';
						}
						else if(i!=n-1&&s[i+1][j]=='P')
							{
								Count++;
								s[i+1][j]='.';
							}
			}
		}
	}
	cout<<Count<<endl;
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
