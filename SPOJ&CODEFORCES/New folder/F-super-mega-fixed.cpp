#include <bits/stdc++.h>
using namespace std;
#define ll long long
 int main()
 {
 	ll n;
 	ll a[] ={1,1,1,1,1,0,0,2,2,0,0,0,1,0,2,0,0,0,0,1,1,1,1,2,1,0};
 	ll cs = 1;
 	//freopen("input.txt", "r", stdin);
	do{
		cin>>n;
		if (n!=0)
		cout<<"Case "<<cs++<<":\n";
		cin.ignore();
		for(ll i=0;i<n;i++){
			string s;
			getline(cin,s);
			ll count=0;
			for(ll j=0;j<s.length();j++){
				if((int) s[j]>=65 &&(int) s[j] <=90)
				count+=a[s[j]-65];
			}
			cout<<s<<" "<<count<<endl;
		}
	}
	while(n!=0);
 	return 0;
 }
