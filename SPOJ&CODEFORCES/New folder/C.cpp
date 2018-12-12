#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	cin.ignore();
	while(t>0){
	string x,y;
	getline(cin,x);
	getline(cin,y);
	vector <ll> v;
	for(ll i=0;i<y.length();i++)
	{
		if(y.find(x)!=-1){
			v.push_back(y.find(x));
			y[y.find(x)]='*';
		}
	}
	cout<<v.size()<<"\n";
	for(ll i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
		t--;
	}
	return 0;
}
