#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("65-max-single.IN", "r", stdin)
#define  Output			freopen("E:/code/testing/input.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================
string s;
ll n;
string req;
map <char,ll> atoms;
map <char,ll> AtomsReq;
//-----------------------------

void Solves()
{
	cin>>s>>n;
	ll Num = 0;
	char c = 'a';
	for(ll i= 0;i<s.length();i++)
	{
		if(s[i] >= 65 && s[i] <= 90)
		{
			if(c != 'a')
			{		
				if(Num != 0)
				{
					atoms[c] +=(Num*n);
				}		
				else
				{
					atoms[c] +=n;
				}
			}
			c = s[i];
			Num = 0;
		}
		else if(s[i]>=48 && s[i] <= 57)
		{
			Num = Num*10 + (s[i] - 48);
		}
	}
	if(c != 'a')
	{		
		if(Num != 0)
		{
			atoms[c] +=(Num*n);
		}		
		else
		{
			atoms[c]+=n;
		}
	}	
	cin.ignore();
	cin>>req;
	Num = 0;
	c = 'a';
	for(ll i= 0;i<req.length();i++)
	{
		if(req[i] >= 65 && req[i] <= 90)
		{
			if(c != 'a')
			{		
//				cout<<req[i]<<endl;
				if(Num != 0)
				{
					AtomsReq[c] +=Num;
				}		
				else
				{
					AtomsReq[c]++;
				}
			}
			c = req[i];
			Num = 0;
		}
		else if(req[i]>=48 && req[i] <= 57)
		{
			Num= Num*10 + (req[i] - 48);
		}
	}
	if(c != 'a')
	{		
//		cout<<c<<endl;
		if(Num != 0)
		{
			AtomsReq[c] +=Num;
		}		
		else
		{
			AtomsReq[c]++;
		}
	}
	ll MinResult = 100000000;
	map <char,ll>::iterator it;
	for(it = AtomsReq.begin();it!= AtomsReq.end();it++)
	{
		if(atoms.find(it->first)!= atoms.end())
		{
//			cout<<atoms.find(it->first)->first<<" "<<it->first<<endl;
			ll tmp = atoms.find(it->first)->second / it->second;
			if(tmp < MinResult)
			{
				MinResult = tmp;
			}
		}
		else
		{
			cout<<0<<endl;
			return;
		}
	}
	cout<<MinResult<<endl;
}

int main()
{
    buff;
    Input;
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
