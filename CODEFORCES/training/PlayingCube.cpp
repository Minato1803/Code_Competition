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
ll n,m;
string s,t;
//-----------------------------

void Solves()
{
	cin>>n>>m;
	s+="br";
	t+="rb";
	m--;n--;
	ll len=m+n;
	ll r=n, b=m;
	for(ll it=2;it<len+2;it++)
	{
		if(it%2 == 0)
		{
			if(t[it-1]=='b')
			{
				t+='b';
				b--;
			}
			else
			{
				if(r>0)
				{
					t+='r';
					r--;
				}
				else
				{
					t+='b';
					b--;
				}
						
			}
		}
		else
		{
			if(t[it-1]=='b'&&r>0)
			{
				t+='r';
				r--;
			}
			else
			{
				if(b>0)
				{
					t+='b';
					b--;
				}
				else
				{
					t+='r';	
					r--;
				}
			}
		}
//		it++;
	}
	
	for(ll it=2;it<len+2;it++)
	{
		if(it%2==0)
		{
			if(s[it-1]=='b'&&m>0)
			{
				s+='b';
				m--;
			}
			else
			{
				if(n>0)
				{
					s+='r';
					n--;
				}
				else
				{
					s+='b';
					m--;
				}
						
			}
		}
		else
		{
			if(s[it-1]=='b'&&n>0)
			{
				s+='r';
				n--;
			}
			else
			{
				if(m>0)
				{
					s+='b';
					m--;
				}
				else
				{
					s+='r';	
					n--;
				}
			}
		}
//		it++;
	}
//	cout<<s<<endl;
//	cout<<t<<endl;
	ll TPoint = 0, VPoint = 0;
	ll point1=0, point2=0;
	for(ll i=1;i<s.length();i++)
	{
		if(s[i]==s[i-1])
		{
			TPoint++;
		}
		else
		{
			VPoint++;	
		}
		if(t[i]==t[i-1])
		{
			point1++;
		}
		else
		{
			point2++;	
		}
	}
	if(TPoint>=point1)
		cout<<TPoint<<" "<<VPoint<<endl;
	else
		cout<<point1<<" "<<point2<<endl;	
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
