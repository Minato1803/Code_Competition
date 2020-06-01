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
ll t;
struct Basket
{
	ll Score = 0;
	ll Time = 0;
};
char c,Lead,Sc;
ll score,Min,Sec;
ll Tst = 0,Ted = 0, Tfi = 0;
string s,Sst, Sed, Sfin;
//-----------------------------

string convertTime(ll time)
{
	string s="";
	ll Min = 0, sd = 0;
		sd = time % 60;
		Min = time/60;
		if(Min < 10)
		{
			s = s + "0";
			s+= (Min+48);
		}
		else
		{
			s+=((Min/10) + 48);
			s += ((Min%10)+48);
		}
		s += ":";
		if(sd < 10)
		{
			s = s+ "0" ;
			s+= (sd+48);
		}
		else
		{
			s+=((sd/10) + 48);
			s += ((sd%10)+48);
		}
		return s;
}

ll TimeLead(ll Min, ll Sec)
{
	ll time = 0;
//	cout<<Min<<":"<<Sec<<" Time: "<<time<<"*****"<<endl;
	time = Min*60 + Sec;
	return time;
}

void Solves()
{
	Basket A,H;
	cin>>t;
	cin>>c>>score>>Min>>Sc>>Sec;
	if(c == 'A')
	{
		A.Score += score;	
	}
	else
	{
		H.Score += score;	
	}
	Lead = c;
	Tst = TimeLead(Min,Sec);
	Tfi = TimeLead(Min,Sec);
	for(ll i= 1;i<t;i++)
	{
		cin>>c>>score>>Min>>Sc>>Sec;
		Ted = TimeLead(Min,Sec);
		if(c == 'A')
		{
			A.Score += score;
		}
		else
		{
			H.Score += score;
		}
		if(A.Score == H.Score)
		{
			if(Lead == 'H')
			{
				H.Time += (Ted - Tst);
			}
			else if(Lead == 'A')
			{
					A.Time += (Ted - Tst);
			}
			Tst = 0;
			Lead ='B';
		}
		else if(A.Score > H.Score)
		{
			
			if(Lead == 'H')
			{
				H.Time += (Ted - Tst);
				Lead = 'A';
				Tst = TimeLead(Min,Sec);
			}
			if(Lead == 'B')
			{
				Lead = 'A';
				Tst = TimeLead(Min,Sec);
				Tst = TimeLead(Min,Sec);
			}
			
		}
		else
		{

			if(Lead == 'A')
			{
				A.Time += (Ted - Tst);
				Lead = 'H';
				Tst = TimeLead(Min,Sec);
			}
			if(Lead == 'B')
			{
				Lead = 'H';
				Tst = TimeLead(Min,Sec);
			}
		}
//		Tfi = TimeLead(Min,Sec);
	}
	if(Lead == 'A')
	{
		A.Time += (1920 - Tst);
	}
	else if(Lead == 'H')
	{
		H.Time += (1920 - Tst);
	}
	
	cout<<((A.Score > H.Score) ? "A" : "H") <<" ";
	cout<<convertTime(H.Time)<<" "<<convertTime(A.Time)<<endl;
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
