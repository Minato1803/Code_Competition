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
ll n,a;
vector<ll>pows;
vector<ll>::iterator low;
//-----------------------------

void Solves()
{
	for(int i=1;i<=40001;i++) 
		pows.push_back(i*i);
	cin>>n;
	while(n--)
	{
		cin>>a;
		ll x,y;
		low=upper_bound(pows.begin(),pows.end(),a) - 1;
		for(int i=low-pows.begin();i>=0;i--)
			{
				if(a%pows[i]==0)
				{
					x=i;
					y=a/pows[i];
					break;
				}
			}
		cout<<x+1<<" "<<y<<endl;
		
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
