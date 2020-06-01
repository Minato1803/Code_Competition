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
struct stars
{
	ll hr, min;
	ll Fhr, Fmin;
	ll st = 0;
	ll len = 0;
};
ll CountDays = 0;
ll CountTime = 0; 
//-----------------------------

ll transTime(ll h, ll m)
{
//	cout<<"** "<<h<<" "<<m<<endl;
	return (h*60 + m);
}

void OutDays(ll D)
{
//	cout<<"Days "<<D<<endl;
	ll result =  D%7;
	switch(result)
	{
		case 1:
		{
			cout<<"Sunday"<<endl;
			break;
		}
		case 2:
		{
			cout<<"Monday"<<endl;
			break;
		}
		case 3:
		{
			cout<<"Tuesday"<<endl;
			break;
		}
		case 4:
		{
			cout<<"Wednesday"<<endl;
			break;
		}	
		case 5: 
		{
			cout<<"Thursday"<<endl;
			break;
		}
		case 6:
		{
			cout<<"Friday"<<endl;
			break;
		}
		case 0:
		{
			cout<<"Saturday"<<endl;
			break;
		}	
	}
}
void OutTime (ll times)
{
//	cout<<"Time "<<times<<endl;
	times%=1440;
	ll hours = times/60;
	ll min = times%60;
	if(hours < 10)
	{
		cout<<"0"<<hours;
	}
	else
		cout<<hours;
	cout<<":";
	if(min < 10)
	{
		cout<<"0"<<min;
	}
	else
		cout<<min;
}

void Solves()
{
	stars a,b;
	char c;
	cin>>a.hr>>c>>a.min;
	cin>>b.hr>>c>>b.min;
	cin>>a.Fhr>>c>>a.Fmin;
	cin>>b.Fhr>>c>>b.Fmin;
	a.st = transTime(a.hr,a.min);
	a.len = transTime(a.Fhr,a.Fmin);
	b.st = transTime(b.hr,b.min);
	b.len = transTime(b.Fhr,b.Fmin);
	if(a.st == b.st)
	{
		cout<<"Saturday"<<endl;
		cout<<a.hr<<":"<<a.min<<endl;
		return;
	}
	// ax +r1 = by + r2
//	cout<<a.len<<" "<<a.st<<endl;
//	cout<<b.len<<" "<<b.st<<endl;
	
	bool check = 0;
	for(ll i= 1;i<=1000;i++)
		for(ll j = 1;j<=1000;j++)
		{
			if(a.len*i + a.st == b.len*j + b.st)
			{
				check = 1;
				if(CountTime == 0 || CountTime > a.len*i + a.st)
				{
					CountTime = a.len*i + a.st;
					
				}
			}
		}
	if(check == 1)
	{
			CountDays = (CountTime / 1440);
			
//		cout<<"CountTime "<<CountTime<<endl;
//		cout<<"CountDays "<<CountDays<<endl;
		// + ((CountTime % 1440 +a.st) <= 1440)? CountDays+=1 : (CountTime % 1440 +a.st) / 1440 + 1;	
		OutDays(CountDays);
		OutTime(CountTime);
	}	
	else
	{
		cout<<"Never"<<endl;
	}
	
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
