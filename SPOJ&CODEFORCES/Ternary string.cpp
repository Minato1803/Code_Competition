#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
 string s,a; 
    cin>>s;
    ll dem0=0,dem1=0;
    ll tmp=0;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='1'){dem1+=1;}
    }
    for(ll i=tmp; i<s.length();i++){
			if(s[i]=='0'){ dem0+=1;tmp++;}
	}
    for(ll i=0;i<dem0;i++){a+="0";}
    for(ll i=0;i<dem1;i++){a+="1";}
    for(int i=tmp;i<s.length();i++){
		if(s[i]=='0'){a+='0';a.erase(a.find("0"),1);} 
		if(s[i]=='2'){a+='2';}
	}

    cout<<a;
return 0;
}
