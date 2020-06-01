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
ll line;
string s;
ll SqBrac = 0, CurlyBrac = 0, Paren = 0;
ll SqPos = 0, CurlyPos = 0, pos = 0;
//-----------------------------

void Solves()
{
	cin>>line;
	cin.ignore();
	getline(cin,s);
	for(ll i = 0; i<s.length();i++)
	{
		if(s[i] == '{')
		{
			SqBrac++;
		}
		if(s[i] == '[')
		{
			CurlyBrac++;
		}
		if(s[i]== '}')
		{
			SqBrac--;
			if(SqBrac == -1)
			{
				SqPos = i;
			}
		}
		if(s[i]== ']')
		{
			CurlyBrac--;
			if(CurlyBrac == -1)
			{
				CurlyPos = i;
			}
		}
		if(s[i] == '(')
		{
			Paren++;
		}
		if(s[i]== ')')
		{
			Paren--;
			if(Paren == -1)
			{
				pos = i;
			}
		}
	}
	if(SqBrac < 0)
	{
		cout<<s[SqPos]<<" "<<SqPos<<endl;
		return;
	}
	else if(CurlyBrac < 0)
	{
		cout<<s[CurlyPos]<<" "<<CurlyPos<<endl;
		return;
	}
	else if(Paren < 0)
	{
		cout<<s[pos]<<" "<<pos<<endl;
		return;
	}
	if(SqBrac >= 0 || CurlyBrac >=0|| Paren >=0)
	{
		cout<<"ok so far"<<endl;
		return;
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
