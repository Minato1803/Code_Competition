#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================

ll score[105][105], sum[105][105];

void Solves()
{
	ll k;
	cin>>k;
 	for(ll i=1;i<=k;i++)
 	{
	 	for(ll j=1;j<=i;j++)
		 	cin>>score[i][j];
	}
	
 	sum[1][1]=score[1][1];
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

int main()
{
    buff;
    Input;
    //Output;
    Solves();
    return 0;
}
