#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,count=0,dem=0;
	cin>>n;
	string s;
	cin>>s;
	ll i=  s.find("0"),j=  s.find("1");
	if(i==-1||j==-1){
		cout<<"0";
		return 0;
	}
	for(i=s.find("0");i<=s.rfind("0");i++){
		if(s[i]=='0'){
			count+=1;
			if(dem>count){
				cout<<(count-1)*2;
				return 0;
			}
		}
		if(s[i]=='1'){
			dem+=1;
		}
	}
	if(dem==0&&count>s.length()/2){
		cout<<"2";
		return 0;
	}
	loop: if(count>s.length()/2){
		count-=1;
		goto loop;
		}
		else cout<<count*2;
	return 0;	
}
