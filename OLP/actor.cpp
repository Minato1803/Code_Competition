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
ll key,t,n,a,b,c;
//------/-----------------------

void Solves()
{
	cin>>key;
	cin>>t;
	while(t>0)
	{
		cin>>n>>a>>b>>c;
		if(key==2)
		{
			cout<<min(a,min(b,c))<<endl;
		}
		else
		{
			cout<<max(a,max(b,c))-min(a,min(b,c))<<endl; // chua timf ra cong thuc :v
		}
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
