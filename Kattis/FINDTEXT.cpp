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
string s, result;
ll pos = -1;
//-----------------------------

void Solves()
{
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
		cout<<tmp.length()<<endl;
		cout<< tmp.length()+pos+1;
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
