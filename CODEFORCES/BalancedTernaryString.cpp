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
ll n;
map <char,ll> Count;
string s;
//-----------------------------

void Solves()
{
	cin>>n>>s;
	for(ll i=0;i<s.length();i++)
	{
		Count[s[i]]++;
	}
	ll remain0 = n/3-Count[48];
	ll remain1 = n/3-Count[49];
	ll remain2 = n/3-Count[50];
//	cout<<remain0<<" "<<remain1<<" "<<remain2<<endl;	
	if(remain0>0)
	{
		if(remain2<=0)
		{
			if(remain1>=0)
			{
				while(remain1>0&&remain2<n/3&&remain2!=0)
				{
					s.replace(s.find("2"),1,1,'1');
					remain1--;
					remain2++;
				}
				while(remain0>0&&remain2<n/3&&remain2!=0)
				{
					s.replace(s.find("2"),1,1,'0');
					remain0--;
					remain2++;
				}
			}
			else
			{
//				cout<<s<<"***"<<remain2<<endl;
				while(remain0>0&&remain2<n/3&&remain2!=0)
				{
					s.replace(s.find("2"),1,1,'0');
					remain0--;
					remain2++;
				}
//				cout<<s<<endl;
				while(remain0>0&&remain1<n/3&&remain1!=0)
				{
					s.replace(s.find("1"),1,1,'0');
					remain0--;
					remain2++;
				}
			}
		}
		else
		{
			if(remain2>0&&remain1<n/3&&remain1!=0)
			{
				while(remain2>0&&remain1<n/3&&remain1!=0)
				{
					s.replace(s.rfind("1"),1,1,'2');
					remain2--;
					remain1++;
				}
			}
			if(remain0>0&&remain1<n/3&&remain1!=0)
			{
				while(remain0>0&&remain1<n/3&&remain1!=0)
				{
					s.replace(s.find("1"),1,1,'0');
					remain0--;
					remain1++;
				}
			}
		}	
	}
	else
	{
		if(remain2<=0)
		{
			while(remain1>0&&remain2<n/3&&remain2!=0)
			{
				s.replace(s.find("2"),1,1,'1');
				remain1--;
				remain2++;
			}
			while(remain1>0&&remain0<n/3&&remain0!=0)
			{
				s.replace(s.rfind("0"),1,1,'1');
				remain1--;
				remain0++;
			}
		}	
		else
		{
			if(remain1<=0)
			{
				if(remain2>0&&remain1<n/3&&remain1!=0)
				{
						while(remain2>0&&remain1<n/3&&remain1!=0)
						{
							s.replace(s.rfind("1"),1,1,'2');
							remain2--;
							remain1++;
						}
				}
				if(remain2>0&&remain0<n/3&&remain0!=0)
					{
						while(remain2>0&&remain0<n/3&&remain0!=0)
						{
							s.replace(s.rfind("0"),1,1,'2');
							remain2--;
							remain0++;
						}
					}
			}
			else
			{
				if(remain2>0&&remain0<n/3&&remain0!=0)
				{
					while(remain2>0&&remain0<n/3&&remain0!=0)
					{
						s.replace(s.rfind("0"),1,1,'2');
						remain2--;
						remain0++;
					}
				}
				if(remain1>0&&remain0<n/3&&remain0!=0)
				{
					while(remain1>0&&remain0<n/3&&remain0!=0)
					{
						s.replace(s.rfind("0"),1,1,'1');
						remain1--;
						remain0++;
					}
				}
			}
		}	
	}
	cout<<s;
}

int main()
{
//    buff;
    Input;
//    Output;
    Solves();
    return 0;
}
