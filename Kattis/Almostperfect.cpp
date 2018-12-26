//
#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define db              double
#define fix_set(x)      fixed<<setprecision(x)
#define buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input			freopen("input.txt", "r", stdin)
#define output			freopen("output.txt", "w", stdout)

//====================================================================================================

void Solves()
{
 
}

int main()
{
    buff;
//    input; 
//		output;
	ll p,sum,tmp;
 	while(cin>>p)
 	{
		cout<<p<<" ";
		sum=1;
		tmp=sqrt(p);
		for(ll i=2;i<sqrt(p);i++)
 			if(p%i==0)
 				sum+=i+p/i;
		if(tmp*tmp==p)
			sum+=tmp;
		if(sum == p )
			cout<<"perfect"<<endl;
		else
		if(sum>=p-2 && sum<=p+2)
			cout<<"almost perfect"<<endl;
		else
			cout<<"not perfect"<<endl;
	}
	Solves();
    return 0;
}
