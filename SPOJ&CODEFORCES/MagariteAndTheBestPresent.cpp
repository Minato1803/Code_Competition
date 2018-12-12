#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output2.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================
ll q,l,r;

void Solves()
{
	cin>>q;
	for(ll Q=0;Q<q;Q++)
	{
		cin>>l>>r;
		if(l==r)
			cout<<(r%2==0?r:-r)<<endl;
		else
			cout<<((r%2==0?r/2:-(r/2+1)) - ((l-1)%2==0?(l-1)/2:-((l-1)/2+1)))<<endl; 
	}
}

int main()
{
    buff;
    //Input;
//    Output;
    Solves();
    return 0;
}
