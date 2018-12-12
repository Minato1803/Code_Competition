#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	string s;
	ll i;
	cin>>s;
 	for (i = 1; i < s.length(); i++){
        if (islower(s[i])!=0){
            cout<<s;
            return 0;
		}
	}
    if (i == s.length()){
        for (i = 0; i < s.length(); i++){
            if (isupper(s[i])!=0){
                cout<<(char) tolower(s[i]);
        	}
            else cout<<(char) toupper(s[i]);
    	}
    }
	return 0;
}
