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
ll t,n;
//-----------------------------

void Solves()
{
	cin>>t;
	while(t>0)
	{
		cin>>n;
		for(ll i=2;i<=64;i++)
		{
			long double a = pow(n,1.0/i);
			//cout<<a<<" "<<i<<" "<<pow(ceil(a-0.5),i)<<" "<<ceil(a-0.5)<<endl;
			if(pow(ceil(a-0.5),i)==n)
			{
				cout<<"YES"<<endl;
				goto End;
			}	 
		}	
		cout<<"NO"<<endl;
		End:
		t--;	
	}
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
