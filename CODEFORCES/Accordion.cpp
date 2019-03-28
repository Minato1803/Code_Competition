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

//-----------------------------
ll check(string s)
{
 	ll tmp = 4;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]=='|')
		{
			tmp+=1;
		}		
	}	
	return tmp;	
}

void Solves()
{
	ll maxx=-1;
	bool ok=1;
	string s;
	cin>>s;
	string a=""; 
	if(s.find("[")==-1||s.find("]")==-1)
	{
//		cout<<a<<" fail"<<endl;
		cout<<-1<<endl;
		return;
	}
	else
	{
		while(s.find("[")!=-1||s.find("]")!=-1)
		{
			a = s.substr(s.find("["),s.find("]")+1);
//			cout<<a<<" contain [ ]"<<endl;
 			if(a.find(":")!=-1&&a.rfind(":")!=-1&&a.find(":")!=a.rfind(":"))
				a = a.substr(a.find(":"),a.rfind(":")-1);	
			else
			{
//				cout<<a<<" fail"<<endl;
				ok=0;
//				cout<<maxx<<endl;
//				cout<<-1<<endl;
			}	
//			cout<<a<<"contain : :"<<endl;
			if(maxx < check(a)&&ok==1)
				maxx = check(a);
			a.clear();
			s.erase(0,s.find("]")+1);
			ok=1;
			if(s.length()==0)
				break;
		}
		
	}
	cout<<maxx<<endl;
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
    //[a:]:[b:bbb:cc||][[::|]]:[cc:c|:ccccc]
}
