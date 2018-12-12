#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=(a);i<(b);i++)
#define Fors(i,a,b) for(ll i=(a);i<=(b);i++)
using namespace std;
ll toint(char &s)
{
	return (ll)s-48;
}
int main()	
{
//	freopen("D:/input.txt", "r", stdin);
//	freopen("D:/output.txt", "w", stdout);
//	for(int asdf = 1; asdf <= 1000; asdf++)
	{
		string a,ans="";
	bool dt = true;
	cin >> a;
	string off = a;
	For(i, 0, a.size())
	{
		if (toint(a[i]) < 6)
		{
			if (dt) {
				a.pop_back();
				For(j, 0, a.size())
				{
					a[j] = '8';
				}
				break;
			}
			else
			{
				if (toint(a[i - 1]) == ??
				{
					a[i - 1] = '6';
					For(j, i, a.size()) a[j] = '8';
				}
				else
				{
					For(k, 0, i)
					{
						if (a[k] == '8')
						{
							a[k] = '6';
							For(t, k + 1, a.size()) a[t] = '8';
							{
								
								goto end;
							}
						}
					}
					a.pop_back();
					For(j, 0, a.size())
					{
						a[j] = '8';
					}
				}
				break;
			}
		}
		if (toint(a[i]) > 6 && toint(a[i]) < ??
		{
				a[i] = '6';
				For(j, i + 1, a.size())
				{
					a[j] = '8';
				}
				break;
		}
		if (toint(a[i]) > ??
		{
			For(j, i, a.size())
			{
				a[j] = '8';
			}
			break;
		}
		if (a[i] == '6' || a[i] == '8') dt = false;
	}
	end:
	cout << a << endl;
	}
	return 0;

