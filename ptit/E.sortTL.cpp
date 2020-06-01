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
ll n,i;
bool done = 0;
ll arr[100005];
//-----------------------------

void Solves()
{
	cin>>n;
	for(i= 0 ;i<n;i++)
	{
		cin>>arr[i];
	}
	while(!done)
	{
		done =1;
		for (i=0;i<n-2;++i)
		{
			if(arr[i]>arr[i+2])
			{
				done = 0;
				arr[i]^=arr[i+2];
				arr[i+2]^=arr[i];
				arr[i]^=arr[i+2];
			}
		}
//		for(ll i = 0 ;i<n;i++)
//		{
//			cout<<arr[i]<<" ";
//		}
//		cout<<endl;
	}
	for(i=1;i<=n-1;++i)
		if(arr[i]<arr[i-1])
		{
			cout<<"WA";
			return;
		}
	cout<<"AC";	
	
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
