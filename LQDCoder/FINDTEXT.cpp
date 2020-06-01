#include <bits/stdc++.h>
using namespace std;

#define  Infile				freopen("input.txt", "r", stdin)
#define  Outfile			freopen("output.txt", "w", stdout)
#define  ms(a, u)			memset(a, u, sizeof(a))
#define  pb(x)				push_back(x)
#define  endl				'\n'

typedef unsigned long long ull;
typedef long long ll;
typedef double db;

db const EPS  = DBL_EPSILON;
ll const INF  = LLONG_MAX;


//declare here
string s, result;
ll pos = -1;
//===========

void Result()
{
	//code here
	cin>>s;
	string remain,tmp;
	ll left = 0, right = s.length();
	while(left <= right)
	{
		ll mid = left + (right - left)/2;
		tmp = s.substr(0,mid+1);
		remain = s.substr(mid+1);
//		cout<<left<<" "<<mid<<" "<<right<<endl;
//		cout<<tmp<<" "<<remain<<endl;
		if(remain.find(tmp) != -1)
		{
			result = tmp;
			pos = remain.find(tmp);
			if(remain.length() < tmp.length() || tmp.length() == s.length()/2)
				break;
			left = mid+1;
		}
		else
		{
			right = mid-1;
		}
	}
//	cout<<tmp<<" "<<pos<<endl;
	if(pos == -1)
	{
		cout<<0<<endl;
		cout<<1<<endl;
	}
	else
	{
		cout<<result.length()<<endl;
		cout<< result.length()+pos+1;
	}
}
	

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//	#ifdef RIMURU
//		Infile;
//		Outfile;
//	#endif
	Result();
	
	return 0;
}
