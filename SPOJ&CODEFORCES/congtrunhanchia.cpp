#include <bits/stdc++.h>
using namespace std;
#define ll  long long

int main()
{
	string a;
	
	long long  n;
	cin >> n;
	ll q, b;
	ll s = 0;

	
	
	for (long long i = 0; i < n; i++){
		cin >> q >> b;
		if (b == 0) a.insert(a.size() , "No\n", 3);
		else a.insert(a.size() , "Yes\n", 4);

		
	}
	cout << a;
	return 0;
}
