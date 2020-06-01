#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <limits.h>
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
#define MaxNum 			

//====================================================================================================
ll t;
vector <unsigned ll> Dame;
struct Monster
{
	unsigned ll HP;
	unsigned ll ATK;
};
//-----------------------------
void totalDame()
{
	Dame.push_back(0);
	unsigned ll Count = 1;
	while(((Count-6)*(Count-5)/2) <= (2*1000000000))
	{
		Dame.push_back(Count*(Count+1)/2);
		Count++;
	}
	Dame.push_back(Count*(Count+1)/2);
}

unsigned ll PosDame(unsigned ll a)
{
	vector<unsigned ll>::iterator upper; 
	upper = upper_bound(Dame.begin(),Dame.end(), a);
	unsigned ll result = upper - Dame.begin();
	if(Dame[result -1] == a)
	{
		return result -1;
	}	
	else
		return result;	
}

void Solves()
{
	totalDame();
	cin>>t;
	Monster A,B;
	char Ao = 'A', Bo = 'B';
	while(t--)
	{
		string s="";
		unsigned ll Result = 0;
		unsigned ll ResultMax = 0;
		string SMax = "";
		cin>>A.HP>>B.HP>>A.ATK>>B.ATK;
			s.insert(0,PosDame(A.HP),Ao);
			Result += (PosDame(A.HP)*(A.ATK + B.ATK));
			if(PosDame(A.HP) >= PosDame(A.HP+B.HP))
			{
				s.insert(s.length(),1,Bo);
				Result+=B.ATK;	
			}
			else
			{
				s.insert(s.length(),PosDame(A.HP+B.HP) - PosDame(A.HP),Bo);
				Result+=(B.ATK*(PosDame(A.HP+B.HP) - PosDame(A.HP)));
			}
			if(ResultMax == 0 || ResultMax >= Result)
			{
				SMax = s;
				ResultMax = Result;
			}
			Result = 0;
			s = "";
			s.insert(0,PosDame(B.HP),Bo);
			Result += (PosDame(B.HP)*(B.ATK + A.ATK));
			if(PosDame(B.HP) >= PosDame(A.HP+B.HP))
			{
				s.insert(s.length(),1,Ao);
				Result+=A.ATK;	
			}
			else
			{
				s.insert(s.length(),PosDame(A.HP+B.HP) - PosDame(B.HP),Ao);
				Result+=(A.ATK*(PosDame(A.HP+B.HP) - PosDame(B.HP)));
			}
			if(ResultMax > Result)
			{
				SMax = s;
				ResultMax = Result;
			}
			s = "";
			Result = 0;
//			cout<<SMax<<endl;
			if(PosDame(A.HP) == PosDame(B.HP))
			{
				if(A.ATK >= B.ATK)
				{
					s.insert(0,SMax.length(),Bo);
					s.replace(1,SMax.length()/2,SMax.length()/2,Ao);
					if(Dame[SMax.length()/2+1] - 1 < A.HP)
						goto endd;
					Result = (SMax.length()/2+1) * (A.ATK+B.ATK) +  (SMax.length()-(SMax.length()/2+1))*B.ATK;
				}
				else
				{					
					s.insert(0,SMax.length(),Ao);
					s.replace(1,SMax.length()/2,SMax.length()/2,Bo);
					if(Dame[SMax.length()/2+1] - 1 < B.HP)
						goto endd;
					Result = (SMax.length()/2+1) * (A.ATK+B.ATK) +  (SMax.length()-(SMax.length()/2+1))*A.ATK;
				}
				if(Result == ResultMax)
					SMax = min(s,SMax);
			}
		endd:	
		cout<<ResultMax<<" "<<SMax<<endl;
	}
}
/*
	2
	5 5 1 2
	ABBA
	6 6 1 2
	ABBBA
*/


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
