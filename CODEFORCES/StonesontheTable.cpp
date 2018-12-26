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
	for(ll i=0;i<s.length()-1;i++){
		if(s[i]==s[i+1]){
			count+=1;
		}
	}
	cout<<count;
//	loop1: 
//	if(s.find("R")!=-1){
//		if(s[s.find("R")+1]=='R'){
//			count+=1;
//		s.erase(s.find("R"),1);
//		}
//		if(s.length()==1){
//			cout<<count;
//			return 0;
//		}
//		goto loop1;
//	}
//	else{
//		loop2: 
//		if(s.find("G")!=-1){
//			if(s[s.find("G")+1]=='G'){
//				count+=1;
//			s.erase(s.find("G"),1);
//			}
//			if(s.length()==1){
//				cout<<count;
//				return 0;
//			}
//			goto loop2;
//		}
//		else{
//		loop3:	if(s.find("B")!=-1){
//				if(s[s.find("B")+1]=='B'){
//					count+=1;
//				s.erase(s.find("B"),1);
//				}
//				if(s.length()==1){
//					cout<<count;
//					return 0;
//				}
//				goto loop3;
//			}	
//		}
//	}
	return 0;
	
}
