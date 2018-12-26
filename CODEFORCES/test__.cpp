#include <bits/stdc++.h>
using namespace std;

#define LL long long;

int main(){
	int n,m;
	bool check = true;
	cin >> m >> n;
	for (int i=1; i<=m; i++){
		if (i%2 != 0){
			for (int i=1; i<=n; i++){
				cout << "#";
			}
			cout << endl;
		}
		else {
			if (check){
				for (int i=1; i<n; i++){
					cout << ".";
				}
				cout << "#" << endl;
				check = false;
			}
			else{
				check = true;
				cout << "#";
				for (int i=1; i<n; i++){
					cout << ".";
				}
				cout << endl;
			}
		}
	}
	return 0;
}
