#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll count=0;
	if(s.length()==1){
		cout<<"0";
		return 0;
	}
	loop1: 
	if(s.find("R")=!-1){
		if(s[s.find("R")+1]=="R"){
			count+=1;
		}
		s.erase(s.find("R"),1);
		if(s.length()==1){
			cout<<count;
			return 0;
		}
		goto loop1:
	}
	else{
		loop2: 
		if(s.find("G")=!-1){
			if(s[s.find("G")+1]=="G"){
				count+=1;
			}
			s.erase(s.find("G"),1);
			if(s.length()==1){
				cout<<count;
				return 0;
			}
			goto loop2:
		}
		else{
			if(s.find("G")=!-1){
				if(s[s.find("G")+1]=="G"){
					count+=1;
				}
				s.erase(s.find("G"),1);
				if(s.length()==1){
					cout<<count;
					return 0;
				}
				goto loop2:
			}	
		}
	}
	return 0;
	
}
