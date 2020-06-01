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
stack <char> brac;
ll line;
string s;
//-----------------------------

void Solves()
{
	cin>>line;
	cin.ignore();
	getline(cin,s);
	char c;
	for(ll i = 0;i<s.length();i++)
	{
		if(s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			brac.push(s[i]);
		}
		if(s[i] == ')')
		{
			if(brac.size()== 0 || brac.top() != '(')
			{
				cout<<s[i]<<" "<<i<<endl;
				return;
			}
			else
				brac.pop();
		}
		if(s[i] == ']')
		{
			if(brac.size()== 0 || brac.top() != '[')
			{
				cout<<s[i]<<" "<<i<<endl;
				return;
			}
			brac.pop();
		}
		if(s[i] == '}')
		{
			if(brac.size()== 0 || brac.top() != '{')
			{
				cout<<s[i]<<" "<<i<<endl;
				return;
			}
			brac.pop();
		}
	}
	cout<<"ok so far"<<endl;
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
