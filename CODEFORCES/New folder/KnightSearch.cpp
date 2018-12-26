#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,k;
	cin>>n>>k;
	vector < pair <ll, ll> > a(k);
	for(ll i=0; i<k;i++)
	{
		
		cin>>a[i].first>>a[i].second; 
	}
	if(a[0].first>a[0].second)
	{
		swap(a[0].first,a[0].second);
	}
	ll s=0, check=0;
	for (ll i = 1; i < a.size(); i++)
	{

		if (a[i].first >= a[i-1].first )
		{
			s++; 
			continue;
		}
		 if (a[i].second >= a[i-1].first )
		 {
			s++;
			swap(a[i].first, a[i].second);
			continue;
		}
		 if (a[i].first < a[i - 1].second&&a[i].second < a[i - 1].second)
		 {
			check = 1;
			continue;
		 }
		 if (a[i].first == a[i].second&&a[i].first < a[i - 1].second)
		 {
			check = 1;
			continue;
		 }
	}
	if (s != k - 1||check==1) 
		cout << "NO";
	else cout << "YES";
	return 0;
}
