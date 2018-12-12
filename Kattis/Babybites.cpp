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
    cin>>n;
    ll a[n+5]={0};
   for(ll i=1;i<=n;i++)
   {
		string s;
   		cin>>s;
		if(s.length()==1)
		{
			if(pos<s[0]-48)
			{
				pos=s[0]-48;
			}
			a[s[0]-48]+=1;
		}
		else
		{
			pos=i;
			a[i]++;	
		} 
   }
   for(ll i=1;i<=pos;i++)
   {
//   		cout<<a[i]<<" ";
		if(a[i]!=1)
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
