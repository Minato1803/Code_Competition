#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================

string add(string a, string b)
{
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    ll carry=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        int tmp=a[i]-48 + b[i]-48 + carry;
        carry=tmp/10;
        tmp=tmp%10;
        res=(char)(tmp+48)+res;
    }
    if(carry>0) res="1"+res;
//    cout<<res<<endl;
    return res;
}

void Solves()
{
		string a="1";
		string b="1";
		string sum="";
		string result = "11";
	for(ll i=1;i<=1005;i++)
	{
		sum = add(a,b);
		a = b;
		b = sum;
		result+=sum;
//		cout<<a<<" "<<b<<" "<<sum<<endl;
	}	
	ll n;
	cin>>n;
//	cout<<result;
	cout<<result[n-1];
}

int main()
{
    buff;
    //Input;
//    Output;
    Solves();
    return 0;
}
