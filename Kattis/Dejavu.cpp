//
#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define db              double
#define fix_set(x)      fixed<<setprecision(x)
#define buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input			freopen("input.txt", "r", stdin)
#define output			freopen("output.txt", "w", stdout)

//====================================================================================================

void Solves()
{
 	ll n;
 	scanf("%ld",&n);
 	ll a[n+5],b[n+5];
 	for(ll i=0;i<n;i++)
 	{
 		scanf("%ld%ld",&a[i],&b[i]);
	}
	ll point=0,pos=0,count=0;;
	while(point<n-1)
	{
		for(ll i=0;i<n;i++)
 		{
// 			cout<<a[point]<<"***"<<point<<endl;
			 if(a[point]==a[i]&&i!=point)
 			{
 				for(ll j=0;j<n;j++)
 				{
 					if(a[j]==a[i]&&b[j]==b[i]) continue;
 					if(a[j]==a[point]&&b[j]==b[point]) continue;
 					if(b[j]==b[point]||b[j]==b[i]) count++;
// 					cout<<b[j]<<"**"<<b[point]<<" "<<b[j]<<"**"<<b[i]<<" "<<count<<endl;
				}
			}
		}
		a[point]=0;
		point++;
	}
	cout<<count;
}

int main()
{
//    buff;
//  input;

////	output
	Solves();
    return 0;
}
