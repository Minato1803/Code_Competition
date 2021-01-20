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
vector <string> s;
string start="", mid="", End="";
map <string, ll> Count;
//--------------------------

string rev(string s)
{
	string tmp = "";
	for(ll i = s.length()-1;i>=0;i--)
	{
		tmp+= s[i];
	}
	return tmp;
}

bool check (string s)
{
	for(ll i = 0;i<s.length()/2;i++)
	{
		if(s[i] != s[s.length()-1-i])
			return 0;
	}
	return 1;
}
void Solves()
{
	cin>>n>>m;
	string tmp;
	for(ll i = 0;i<n;i++)
	{
		cin>>tmp;
		Count[tmp]++;
		if(Count[tmp] == 1)
			s.pb(tmp);
	}
	for(ll i = 0;i<n;i++)
	{
	
		if(check(s[i]) == 0 && Count[rev(s[i])] > 0)
		{
//			cout<<s[i]<<endl;
			for(ll j = 0;j<min(Count[rev(s[i])], Count[s[i]]);j++)
			{
//				cout<<Count[rev(s[i])]<<" "<< Count[s[i]]<<endl;
				start+=s[i];
				End.insert(0,rev(s[i]));
			}
			Count[s[i]]--;
		}
		else if(check(s[i]))
		{
			if(check(mid+s[i]))
				mid+=s[i];
		}
	}
//	cout<<start<<" "<<mid<<" "<<End<<endl;
	ll Len = start.length() + mid.length() + End.length();
		cout<<Len<<endl;
		cout<<start<<mid<<End<<endl;
}


int main()
{
    buff;
   /* Input;
    Output;*/
    
    /*clock_t start, end;
    	double time_use;
    start = clock();
    	Solves();
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%f seconds", time_use);*/
    
    Solves();


    return 0;
}
