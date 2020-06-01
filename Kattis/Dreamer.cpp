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
string day,month,year;
string s;
//-----------------------------
bool check(string &s)
{
	string days, months, years;
	days = s.substr(6,2);
	months = s.substr(4,2);
	years = s.substr(0,4);
	int y = stoi(years);
	int d = stoi(days);
//	cout<<days<<" "<<months<<" "<<years<<" "<<y<<endl;
	if(y>=2000)
	{
		if((y % 400 == 0 || (y%4==0 && y%100 !=0)) && months== "02")
		{
				if(d>0 && d<= 29)
					return 1;
				else
					return 0;
		}
		else if(months == "02")
		{
				if(d>0 && d<= 28)
					return 1;
				else
					return 0;			
		}
		if(months == "04" || months == "06" || months == "09" || months == "11")
		{
			if(d>0 && d <= 30)
				return 1;
			else
				return 0;	
		}
		else if(months == "01" || months == "03" || months == "05" || months == "07"||months == "08"||months == "10"||months == "12")
		{
			if(d>0 && d<= 31)
				return 1;
			else
				return 0;
		}			
	}
		return 0;
}

void Solves()
{
	cin>>t;
	
	while(t--)
	{
		string Max = "99991231";
		cin>>day>>month>>year;
		s = year+month+day; 
		sort(s.begin(),s.end());
		ll d,m,y;
		ll Count = 0;
		while(next_permutation(s.begin(), s.end()))
		{
			if(check(s))
			{
				Count++;
//					cout<<s<<endl;
				if(Max > s)
				{
					Max = s;
				}
			}
		}
		string ansD = Max.substr(6,2);
		string ansM = Max.substr(4,2);
		string ansY = Max.substr(0,4);
		if(Count != 0)
			cout<<Count<<" "<<ansD<<" "<<ansM<<" "<<ansY<<endl;
		else
			cout<<0<<endl;	
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
