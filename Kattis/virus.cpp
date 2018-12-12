//
#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define db              double
#define fix_set(x)      fixed<<setprecision(x)
#define buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input			freopen("input.in", "r", stdin)
#define output			freopen("output.out", "w", stdout)

//====================================================================================================

void Solves()
{
 	string a,b;
 	cin>>a>>b;
 	ll len = min(a.length(),b.length());
 	ll count=0;
 	for(ll i=0;i<len;i++)
 	{
 		if(a[i]!=b[i])
 			break;
 		count+=1;
	}
	for(ll i=0;i<len;i++)
 	{
 		if(a[a.length()-i-1]!=b[b.length()-i-1])
 			break;
 		count+=1;
	}
 	if(count==2*len)
 	{
 		if(a.length()>b.length())
 		{
 			cout<<0;
 			return;
		}
		else
		{
			cout<<b.length()-a.length();
			return;
		}
	}
	else
	{
			ll result=b.length()-count;
			if(result<0)
				result=0;
			cout<<result;
		
		return;
	}
 	
}

int main()
{
    buff;
//    input; output;
	Solves();
    return 0;
}
