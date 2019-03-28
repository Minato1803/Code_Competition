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
ll a,b;
ll x,y,z;
//-----------------------------

void Solves()
{
	cin>>a>>b>>x>>y>>z;
	ll edgeA,edgeB,hypo;
	ll tmp = max(x,y);
	edgeA = min(x,y);
	hypo = max(tmp,z);
	edgeB = min(tmp,z);
	if(edgeA>edgeB)
	{
		edgeA^=edgeB;
		edgeB^=edgeA;
		edgeA^=edgeB;
	}
	tmp = min(a,b);
	a = max(a,b);
	b= tmp;
//	cout<<a<<" "<<b<<endl; 
//	cout<<edgeA<<" "<<edgeB<<" "<<hypo<<endl;
	if((edgeA<=b)&&(edgeB<=a)&&(edgeA*edgeA+edgeB*edgeB==hypo*hypo))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;	
		
 	 
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
