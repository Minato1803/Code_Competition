//https://codeforces.com/gym/228920/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixced<<setprecision(x)

//====================================================================================================

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll n;
	cin>>n;
	ll a[n+5];
	ll max = 0, pos=0;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if(max<a[i])
		{
			max=a[i];
			pos=i;
		}
	}
	ll s,f;
	cin>>s>>f;
	if(pos==1) 
		{
			cout<<s;
			return 0;
		}
		ll tmppos=0, maxpos=0;
	if(f-s==1)
	{
		if(s==1)
		{
			cout<<n-(pos-1)+1;
		}
		else
		{
			pos=pos-(n-s);
			cout<<n-(pos-1)+1;
		}
	}
	else
	{
		
		for(ll i=pos-(f-s-1);i<pos+(f-s-1);i++)
		{
			ll tmp=0;
			for(ll j=1,k=i;j<=(f-s);j++,k++)
			{
				if(k>n) break;
				tmp+=a[k];
				tmppos=k;
			}
			if(max<tmp)
			{
				max=tmp;
				maxpos=tmppos-(f-s-1);
//				cout<<tmppos<<"   "<<tmp<<endl;
			}
			
		}
		
		if(s==1)
			cout<<n-(maxpos-1)+1;
		else
			cout<<s-maxpos+1;
	}
	return 0;
}
