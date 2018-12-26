#include <bits/stdc++.h>
using namespace std;
#define ll long long

//void trans(ll j,ll i, string s,vector <ll> a)
//{
//	for(ll k=j-1;k>=i;k--){
//		a.push_back(k);
//		swap(s[k],s[k+1]);
//	}
//		
//}

int main()
{
	ll n;
	cin>>n;
	string s,t;
	cin>>s;
	cin>>t;
	ll dem=0;
	for(ll i=0;i<t.length();i++){
		if(t[i]!=s[i]){
			dem+=1;
		}
	}
	if(dem==0){
		cout<<dem;
		return 0;
	}
	if(dem==1){
		cout<<"-1";
		return 0;
	}
	dem=0;
	vector <ll> a;
	for(ll i=0;i<t.length();i++){
		for(ll j=0;j<s.length();j++){
			if(t[i]==s[j]&&i!=j){
				dem+= j-i;
//				for(ll k=j-1;k>=i;k--){
//					a.push_back(k);
//					swap(s[k],s[k+1]);
//				}
				cout<<s<<endl;
			}
//				trans(j,i,s,a);
				break;
		}
	}
	cout<<dem;
	for (ll i=0;i<a.size();i++){
		cout << a[i] << " ";
	}
	return 0;
}
	
