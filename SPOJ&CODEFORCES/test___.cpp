#include <bits/stdc++.h>
using namespace std;

#define LL long long;
int a[26];

void khoitao(int a[]){
	for (int i=0; i<26; i++) a[i]=0;
}

int main(){
	int t;
	cin >> t;
	string s;
	while (t--){
		cin >> s;
		int  dem = 0;
		khoitao(a);
		for (int i=0; i<s.length(); i++){
			a[s[i]-'a'] = 1;
		}
		for (int i=0; i<26; i++){
			if (a[i]) dem++;
		}
		if (dem%2 == 0) cout << "CHAT WITH HER!" << endl;
		else cout << "IGNORE HIM!" << endl;
	}
}
