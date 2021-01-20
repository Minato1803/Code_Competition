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
ll t;
ll a[3];
//-----------------------------
void Solves()
{
	cin>>t;
	while(t--)
	{
		for(ll i =0;i<3;i++)
		{
			cin>>a[i];
		}
		sort(a,a+3);
//		for(ll i =0;i<3;i++)
//		{
//			cout<<a[i]<<" ";
//		}
//		cout<<endl;
		if(a[2] != a[1])
			cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;	
		}
		
	}
}


int main()
{
    buff;
   /* Input;
    Output;*/
    
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
