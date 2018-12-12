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

void Solves(ll m)
{
 	if(m<=2)
 	{
 		cout<<1;
 		return;
	}
 	ll count=2;
	ll a=1, b=1;
	while(count<m)
 	{
		b+=a;
 		a=b-a;
 		count+=floor(log10(b))+1;
 		if(count==m)
 		{
 			cout<<b%10;
 			return;
		}
	}
	string s;
    stringstream ss;
    ss << b;
    ss >> s;
    cout<<count<<" "<<b<<" "<<s<<endl;
    cout<<s[s.length()-(count-m+1)];
}

int main()
{
    buff;
//    input; output;
	ll m;
	cin>>m;
	Solves(m);
    return 0;
}
