#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	string s;
	cin>>s;
	loop: if(s. find("WUB")!=-1){
			if(s.find("WUB")==0){
				s.erase(s.find("WUB"),3);
				goto loop;
			}
			else {
				s.replace(s.find("WUB"),3," ");
				if(s.find("  ")!=-1){
					s.replace(s.find("  "),2," ");
				}
				goto  loop;
			}
		}
	cout<<s;
	return 0;
}
