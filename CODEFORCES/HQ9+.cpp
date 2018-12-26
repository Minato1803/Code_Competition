#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	string p;
	cin>>p;
	if(p.find("H")!=-1||p.find("Q")!=-1||p.find("9")!=-1){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}
