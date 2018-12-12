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

ll arr[105], n, a[105], sum = 0, ans = 0;
vector <ll> up;
vector <ll> down;


void Solves()
{
	a[0] = 0;
	for(ll i=0;i<1000;i++)
	{
		sum+= i;
		a[i+1] =sum; 
	}
	cin >> n;
	for(ll i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	arr[n] = arr[n-1];
	bool first = true;
	ll last;
	for(ll i=0; i<n+1;i++)
	{
	ll ds = down.size();
	ll us = up.size();
		if (first)
		{
			up.push_back(arr[i]);
			down.push_back(arr[i]);
			last = arr[i];
			first = false;
			continue;
		}
		else
			if (arr[i] > last)
			{
				up.push_back(arr[i]);
				ans += a[down.size()];
				down.clear();
				down.push_back(arr[i]);
			}
			else if (arr[i] < last)
			{
				down.push_back(arr[i]);
				ans += a[up.size()];
				up.clear();
				up.push_back(arr[i]);
			}
			else
			{
				ans += a[down.size()];
				ans += a[up.size()];
				down.clear();
				up.clear();
				up.push_back(arr[i]);
				down.push_back(arr[i]);
				//first = true;
			}
		last = arr[i];
	}
	cout << ans;	
}

int main()
{
    buff;
    //Input;
//    Output;
    Solves();
    return 0;
}
