#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/SoHoanHao.in", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================

double convert(string s)
{
  float up = atof(s.c_str());
  return up;
}

void Solves()
{
	ll t,n;
	cin>>t;
	for(ll T=0;T<t;T++)
	{
		cin>>n;
		double countmg=0.0,countug=0.0,countg=0.0;
		ll a=0;
		for(ll i=0;i<n;i++)
		{
			string s;
			cin>>s;
			if(s.find("g")!=-1&&(s[s.find("g")-1]!='u'&&s[s.find("g")-1]!='m'))
			{
				s.erase(s.length()-1);
					countg += convert(s)*1000000;
//					 a+=countg;
//					 cout<<countg<<" "<<a<<endl;
			}
			else
				if(s.find("mg")!=-1)
				{
					s.erase(s.length()-2);
					countmg += convert(s)*1000;
//					cout<<countmg<<" "<<a<<endl;
//					 a +=countmg;
				}
				else
				{
					s.erase(s.length()-2);
					countug += convert(s);
				}
		}
//		cout<<a<<endl;
//		a+=countug;
		printf("%.0f",countmg+countg+countug);
		cout<<"ug"<<endl;
	}
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
