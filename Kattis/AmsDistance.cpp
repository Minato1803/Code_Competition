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
db m,n;
db r;
db Ax,Bx,Ay,By;
db result = 0;
//-----------------------------

void Solves()
{
	cin>>m>>n>>r;
	cin>>Ax>>Bx>>Ay>>By;
	db disN = r/n;
	result = disN*By + Bx*disN; //case1
	db tmp = abs(By - Bx)*disN + M_PI*min(Bx,By)*disN*(180.0/m*abs(Ay-Ax))/180.0;
//	cout<<result<<" "<<tmp<<endl;
	cout<<fix_set(6)<<min(result, tmp)<<endl;
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
