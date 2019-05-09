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
ll n, braceOpen = 0;
string s;
stack <ll> Count;
//-----------------------------




void Solves()
{
	cin>>n>>s;
	
	if(s.length()%2!=0 || s[0]==')' || s[n-1] == '(')
	{
		cout<<":("<<endl;
		return;
	}
	else
	{
		s[0] = '(';
		s[n-1] = ')'; 
	}
	
	for(ll i=1;i<s.length()-1;i++)
	{
		if(s[i]=='?')
		{
			if(braceOpen<=0)
			{
				s[i] = '(';
				braceOpen++;
			}
			else
			{
				s[i] = ')';
				braceOpen--;
				Count.push(i);
			}
		}
		else
			if(s[i] == '(')
			{
				braceOpen++;
			}
			else
				if(s[i]==')')
				{
					if(braceOpen>0)
					{
						braceOpen--;
					}
					else
					{
						if(Count.size()!=0)
						{
							ll tmp = Count.top();
//							cout<<tmp<<" "<<braceOpen<<endl;
							Count.pop();
							s[tmp] = '(';
							braceOpen++;
						}
						else
						{
							cout<<":("<<endl;
							return;
						}
					}
				}
	}
	if(braceOpen>0)
	{
		cout<<":("<<endl;
		return;
	}
		
	cout<<s<<endl;
	
}

int main()
{
	//	6
	//	(??)))
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
