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
ll n,q;
string s;
struct tags
{
	string tag, att, value;
};
map <string, string> cmd;
//-----------------------------

void Solves()
{
	cin>>n>>q;
	cin.ignore();
	tags tmp;
	string bktag = "";
	for(ll i =0; i<n;i++)
	{
		getline(cin,s);
		stringstream ss(s);
		string token;
		while(ss>>token)
		{
			if(token[0]== '<')
			{
				if(token[1] == '/')
				{
					bktag.erase(bktag.find(token.substr(2,token.length()-3)));
					if(bktag.rfind(".") != -1)
						bktag.erase(bktag.rfind("."));
				}
				else
				{
					tmp.tag = token.substr(1,token.length()-1);
					if(tmp.tag.rfind(">") != -1 )
					{
						tmp.tag.erase(tmp.tag.rfind(">"));
					}
					if(bktag.length()==0)
						bktag+=tmp.tag;
					else
						bktag = bktag + "." + tmp.tag;
//					cout<<bktag<<"**"<<endl;
				}
			}
			else if(token[0] == '"')
			{
				tmp.value = token.substr(1,token.length()-2);
				if(tmp.value[tmp.value.length()-1] == '"')
				{
					tmp.value.erase(tmp.value.length()-1);
				}
//				cout<<tmp.value<<"**"<<endl;
				string quest = bktag + "~" + tmp.att; 
				cmd[quest] = tmp.value;
//				cout<<quest<<" "<<tmp.value<<endl;
			}
			else if(token[0] != '=')
			{
				tmp.att = token;
//				cout<<tmp.att<<"**"<<endl;
			}
		}
	}
	
	for(ll i=0;i<q;i++)
	{
		getline(cin,s);
		if(cmd.find(s) != cmd.end())
		{
			cout<< cmd[s]<<endl;
		}
		else
			cout<<"Not Found!"<<endl;
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
