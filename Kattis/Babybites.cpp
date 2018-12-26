//
#include <bits/stdc++.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixed<<setprecision(x)

//====================================================================================================

void Solves()
{
    ll n,pos=0;
	string s; 
    cin>>n;
	cin.ignore();
   for(ll i=1;i<=n;i++)
   {
		cin>>s;
		if(s=="mumble")
			continue;
		if(to_string(i)!=s)
   		{
   			cout<<"something is fishy";
   			return ;	
		}
   }
   cout<<"makes sense";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	Solves();			
	return 0;
}
