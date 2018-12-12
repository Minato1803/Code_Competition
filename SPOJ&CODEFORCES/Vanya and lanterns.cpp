#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
int main()
{
	ll n,l;
	cin>>n>>l;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	db max=0;
	for(ll i=0,j=i+1;i<n-1;i++){
		if((a[j]-a[i])>max) max=a[j]-a[i];
		j++;
	}
	if(a[0]!=0){
		if(max/2>=a[0]) max=max/2;
		else max=(db)a[0];
	}
	else max=max/2;
	if(l-a[n-1]>max) cout<<fixed<<setprecision(9)<<(db) (l-a[n-1]);
	else cout<<fixed<<setprecision(9)<<max;
	return 0;
}
