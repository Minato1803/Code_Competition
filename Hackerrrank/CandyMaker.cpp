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
ll m,w,p,n;
ll Count = 0;
ll candy = 0;
ll cost = 0;
//-----------------------------

void Solves()
{
	cin>>m>>w>>p>>n;
	ll tmp = n;
	ll mincount = n;
	while(candy<n)
	{
		if(m*w == n)
		{
			cout<<1<<endl;
			return;
		}
		Count++;
		candy += m*w;
		if((n-candy)%(m*w) == 0)
		{
			tmp = (n- candy) / (m*w) + Count;
		}
		else
			tmp = (n- candy)/ (m*w) + 1 + Count;
//		cout<<Count<<": "<<m<<" "<<w<<" "<<candy<<endl;
//		cout<<"tmp: "<<tmp<<" "<<(n- candy)/(m*w)<<endl;	
		if(tmp < mincount)
		{
			mincount = tmp;
//			cout<<mincount<<"****"<<endl;
		}	
		if(candy >= n || Count >= mincount)
			break;
			
		cost = candy / p;
		candy %= p;
//		cout<<"remain: "<<candy<<endl;
		if(cost % 2 != 0)
		{
			 if(m>=w)
			 {
			 	m+= cost/2;
			 	w += cost/2+1; 
			 }
			 else
			 {
			 	w+= cost/2;
			 	m += cost/2+1;
			 }
		}
		else
		{
			m+=cost/2;
			w+=cost/2;
		}
	}
	if(Count > mincount)
		Count = mincount;
	cout<<Count<<endl;
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
