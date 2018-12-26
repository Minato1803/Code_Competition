#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(ll i=0;i<t;i++)
	{
        for(ll j=0;j<n-1;j++)
		{
            if(s[j]=='B'&&s[j+1]=='G')
			{
                s[j]='G';
                s[j+1]='B';
                j+=1;
            }
        }
    }
    cout<<s;
    return 0;
    // bai nay e cung tung lam roi =)) hen qua
}
