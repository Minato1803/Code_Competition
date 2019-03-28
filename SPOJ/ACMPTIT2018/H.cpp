#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/ouput.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
ll t;
ll k;
struct coor
{
	long double x,y;
};
//-----------------------------

long double distance(struct coor a, struct coor b)
{
	long double result=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
	return result;
}

long double Heron(struct coor a, struct coor b, struct coor c)
{
	long double ab, bc, ac;
	ab = distance(a,b);
	bc = distance(b,c);
	ac = distance(a,c);
	long double p = (ab+bc+ac)/2;
	long double result = sqrt(p*(p-ab)*(p-ac)*(p-bc));
	return result;
}
void Solves()
{
	cin>>t;
	while(t>0)
	{
		cin>>k;
		coor a,b,c,d,e,ac,ae;
		cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y>>d.x>>d.y;
		long double Sabc = Heron(a,b,c);
		long double Saed = Sabc/k;
		ac.x = c.x - a.x;
		ac.y = c.y - a.y;
		ll left =1, right = 1e15;
		ll mid = (left+right)/2;
		long double bao = 0.000002;
		bool check=0;	
		while(left<=right)
		{
			long double rate = left/1000000.0;
			e.x = a.x + ac.x*rate;
			e.y = a.y + ac.y*rate;
//			cout << Heron(a,e,d)/Saed << endl;
			if()
			{
				cout<<fix_set(2)<<e.x<<" "<<e.y<<endl;
				check =1;
				break;
			}
			left++;
		}
			if(check==0)
				cout<<"No solution"<<endl;
		t--;
//		{
			
//			double rate = mid/100000;
//			e.x = a.x + ac.x*rate;
//			e.y = a.y + ac.y*rate;
//			if(Saed-Heron(a,e,d)<=bao)
//			{
//				if()
//				{
//					cout<<fix_set(2)<<e.x<<" "<<e.y<<endl;
//					break;
//				}
//				right = mid - 1;
//			}
//			else
//			{
//				left= mid+1;
//			}
//			mid = (left+right)/2;
//			
//		}
		
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
