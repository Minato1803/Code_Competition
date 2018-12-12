#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	string s;
	cin>>s;
	if(s.length()==1){
		cout<<s;
		return 0;
	}
	loop1: if(s.find("1")!=-1){
				cout<<s[s.find("1")];
				if(s.find("+")!=-1){
					cout<<s[s.find("+")];}
					else return 0;
				s.erase(s.find("1"),1);
				s.erase(s.find("+"),1);
				goto loop1;
			}
			else{
			loop2: if(s.find("2")!=-1){
						cout<<s[s.find("2")];
						if(s.find("+")!=-1){
							cout<<s[s.find("+")];}
						else return 0;
						s.erase(s.find("2"),1);
						s.erase(s.find("+"),1);
			goto loop2;
					}
					else {
						loop3: if(s.find("3")!=-1){
									cout<<s[s.find("3")];
									if(s.find("+")!=-1){
										cout<<s[s.find("+")];}
									else return 0;
									s.erase(s.find("3"),1);
									s.erase(s.find("+"),1);
									goto loop3;
								}
					} 	
			}
	return 0;		
}
