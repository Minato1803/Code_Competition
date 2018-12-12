#include <bits/stdc++.h>
using namespace std;
#define ll long long
char sum(char c){
	char a;
	a = tolower(c);
	return a;
}

int main()
{
	string s;
	string a;
	cin>>s>>a;
	for(ll i=0;i<s.length();i++){
		s[i] = sum(s[i]);
		a[i] = sum(a[i]) ;
	}
	 if (s < a) {
        cout << -1;
    } else if (s > a) {
        cout << 1;
    } else if (s == a) {
        cout << 0;
    }
//	ll Sn=0,An=0;
//	for(ll i=0;i<s.length();i++){
//		Sn+=sum(s[i]);
//		An+=sum(a[i]);
//	}
//	cout<<Sn<<" "<<An<<endl;
//	if(Sn<An){
//		cout<<"-1";
//		return 0;
//	}
//	if(Sn==An){
//		cout<<"0";
//	}
//	else cout<<"1";
	return 0;
}
