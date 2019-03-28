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
ll t,n, Prime[1000005]={0},a[100005],tmp,i,ans,Count[1000005]={0};
//-----------------------------

void isPrime()
{
	for(ll i=2;i*i<=1000000;++i)
	{
		if(Prime[i]==0)
		{
			for(ll j=i*i;j<=1000000;j+=i)
			{
				if(Prime[j]==0)
					Prime[j] = i;
			}	
			
		}
	}
	for(ll i=2;i<=1000000;++i)
	{
		if(Prime[i]==0)
			Prime[i]=i;
	}
}

void Solves()
{
	isPrime();
	cin>>t;

	while(t--)
	{
		cin>>n;
		ans=0;
		ms(Count,0);
		for(i=0;i<n;++i)
		{
			cin>>a[i];
			tmp = a[i];
			while(tmp>1)
			{
				++Count[Prime[tmp]];
				tmp/=Prime[tmp];	
			}
		}
		for(i=0;i<n;++i)
		{
			while(a[i]>1)
			{
//				cout<<a[i]<<" "<<Prime[a[i]]<<" "<<Count[Prime[a[i]]]<<endl;
				if(Count[Prime[a[i]]]>1)
					goto loop;
				a[i]/=Prime[a[i]];	
			}
			++ans;
			loop:;
		}
		if(ans<=1905)
//			printf("HaVu\n");
			cout<<"HaVu\n";
		else
		{
			if(ans<=2801)
//				printf("Yeu Ha Noi\n");
				cout<<"Yeu Ha Noi\n";
			else
//				printf("%lld\n",ans);
				cout<<ans<<"\n";
		}	
			cout<<ans<<endl;	
//		t--;
	}
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    
//    clock_t start, end;
//    	double time_use;
//    start = clock();
//    	Solves();
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("%f seconds", time_use);
    return 0;
}
