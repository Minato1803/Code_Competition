#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
ll score[105][105], sum[105][105];
ll n;
//-----------------------------

void Solves()
{
	cin>>n;
 	for(ll i=1;i<=n;i++)
 	{
	 	for(ll j=1;j<=n;j++)
		 	cin>>score[i][j];
	}
	for(ll i=1;i<=n;i++)
	{		
 		sum[1][i]=score[1][i];
		for(ll i=2;i<=k;i++)
		{
			for(ll j=1;j<=i;j++)
			{
				sum[i][j]=score[i][j] + max(sum[i-1][j-1],sum[i-1][j]);
//			cout<<score[i][j]<<" "<<result[i-1][j-1]<<" "<<result[i-1][j]<<endl;	
			}	
		}
	ll result=0;
	for(ll i=1;i<=k;i++)
		result=max(result,sum[k][i]);	
	cout<<result;
	}
}

int main()
{
    buff;
//    Input;
    Output;
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
