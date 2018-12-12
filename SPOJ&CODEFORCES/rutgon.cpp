#include <bits/stdc++.h>
using namespace std;
#define ll long long

void change(string s)
{
	lap: for(ll i=0;i<s.length()-1;i++){
		if(s.length()==1){cout<<"1"; return;}
		if(s[i]!=s[i+1]){
			if((s[i]=='a'&&s[i+1]=='b')||(s[i]=='b'&&s[i+1]=='a')){
				s.replace(i,2,"c");
				goto loop;	
			}
			if((s[i]=='b'&&s[i+1]=='c')||(s[i]=='c'&&s[i+1]=='b')){
				s.replace(i,2,"a");
				goto loop;	
			}
			if((s[i]=='a'&&s[i+1]=='c')||(s[i]=='c'&&s[i+1]=='a')){
				s.replace(i,2,"b");
				goto loop;	
			}
		}
	}
	loop: for(ll i=s.length()-1;i>0;i--){
		if(s.length()==1){cout<<"1"; return;}
		if(s[i]!=s[i-1]){
			if((s[i]=='a'&&s[i-1]=='b')||(s[i]=='b'&&s[i-1]=='a')){
				s.replace(i,2,"c");
				goto lap;	
			}
			if((s[i]=='b'&&s[i-1]=='c')||(s[i]=='c'&&s[i-1]=='b')){
				s.replace(i,2,"a");
				goto lap;	
			}
			if((s[i]=='a'&&s[i-1]=='c')||(s[i]=='c'&&s[i-1]=='a')){
				s.replace(i,2,"b");
				goto lap;	
			}
		}
	}
	cout<<s.length()<<endl;
}

int main()
{
	ll T;
	string s;
	cin>>T;
	for(ll i=0;i<T;i++){
		cin>>s;
		change(s);
	}
	return 0;
}
