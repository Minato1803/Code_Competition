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
ll f,s,g,u,d;
ll x,y;
//-----------------------------

void Solves()
{
	cin>>f>>s>>g>>u>>d;
	ll left = 0, right = 1000000;
//	g = s + x*u -d*y; x = (g-s +d*y)/u; 
	y= right /2;
	x =  (g-s +d*y)/u;
	ll Minstep = y + x;
	 while(left != right)
	 {
	 	mid =left + (right - left) /2
	 	y= mid;
	 	x =  (g-s +d*y)/u;
	 	if()
	 }
		cout<<"use the stairs"<<endl;
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
