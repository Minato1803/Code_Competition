#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  input			freopen("input.txt", "r", stdin)
#define  output			freopen("output.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================

void Solves()
{
	vector <string> name;
	ll n,count=0;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		loop:
			string s,tmp = "";
			cin>>tmp>>s;
			if(count>=12) 
				continue;
			for(ll j=0;j<name.size();j++)
			{
				if(tmp==name[j]) 
					goto loop;
			}
				cout<<tmp<<" "<<s<<endl;
				name.push_back(tmp);
				count++;	
	}
}

int main()
{
    buff;
//    input; 
//	output;
	Solves();
    return 0;
}
