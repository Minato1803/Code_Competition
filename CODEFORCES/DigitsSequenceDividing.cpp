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
ll q,n;
string s;
//-----------------------------

void Solves()
{
	cin>>q;
	for(ll i=0;i<q;i++)
	{
		cin>>n;
		cin>>s;
		if(s.length()==2)
		{
			if((ll) s[0]-48 >= (ll) s[1]-48)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl<<"2"<<endl;
				cout<<s[0]<<" "<<s[1]<<endl;
			}
		}
		else
		{
			cout<<"YES"<<endl<<"2"<<endl;
			
			if(s.length()%2==0)
			{
				
				cout<<s.substr(0,s.length()/2-1)<<" "<<s.substr(s.length()/2-1,s.length()/2+1)<<endl;
			}
			else
			{
				cout<<s.substr(0,s.length()/2)<<" "<<s.substr(s.length()/2,s.length()/2+1)<<endl;
			}
		}
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
